/*****************************************************************************\
 * Copyright 2014 Lawrence Livermore National Security, LLC
 * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
 *
 * This file is part of the Flux resource manager framework.
 * For details, see https://github.com/flux-framework.
 *
 * SPDX-License-Identifier: LGPL-3.0
\*****************************************************************************/

extern "C" {
#if HAVE_CONFIG_H
#include <config.h>
#endif
}

#include "resource/policies/dfu_match_locality.hpp"

namespace Flux {
namespace resource_model {

// the entire match poliy is a callback object that is calles upon by the DFU traverser (dfu_impl_t)
greater_interval_first_t::greater_interval_first_t ()
{
}

greater_interval_first_t::greater_interval_first_t (const std::string &name) : dfu_match_cb_t (name)
{
}

greater_interval_first_t::greater_interval_first_t (const greater_interval_first_t &o)
    : dfu_match_cb_t (o)
{
}

greater_interval_first_t &greater_interval_first_t::operator= (const greater_interval_first_t &o)
{
    dfu_match_cb_t::operator= (o);
    return *this;
}

greater_interval_first_t::~greater_interval_first_t ()
{
}

// callback called at the end of the graph traversal. It is called on the Root Vertex after the graph traversal
// called in function dfu_impl_t::resolve_graph (dfu_impl.cpp:1057)
int greater_interval_first_t::dom_finish_graph (
    // an interner is a lookup-table that stores each distinct string once and returns the canonical handle to it
    // type explained in data_std.hpp
    // effectively subsystem_t is a 1-Byte integer handle that compares against the intern table of subsystem strings
    subsystem_t subsystem,

    // this represents the desired job resources, though i don't exactly know how they look like...
    const std::vector<Flux::Jobspec::Resource> &resources,

    // this is the resource graph we are working on. It is implemented as a BoostLib adjacentList
    const resource_graph_t &g,

    // data container: per-subtree "condidate pool + selection state"
    // the traverser fills it, the policy reads / decides on
    scoring_api_t &dfu)
{
    // Interval Container Library (ICL)
    using namespace boost::icl;
    int score = MATCH_MET;
    // a C++ functor for interval comparison
    fold::interval_greater comp;

    // iterate through resources
    for (auto &resource : resources) {
        // how many of the resource type are available
        unsigned int qc = dfu.qualified_count (subsystem, resource.type);
        // calculate the count of the resource that should be allocated based on number of available resources 
        // and the desired resource count (min, max, ...) in the JobSpec
        unsigned int count = calc_count (resource, qc);
        // resources not available
        if (count == 0) {
            score = MATCH_UNMET;
            break;
        }

        // some sorting, transforming on the dfu?
        dfu.transform (subsystem,
                       resource.type,
                       boost::icl::inserter (comp.ivset, comp.ivset.end ()),
                       fold::to_interval);
        dfu.choose_accum_best_k (subsystem, resource.type, count, comp);
    }
    // score on the root node doesn't really have a meening beyond MATCH_MET or MATCH_UNMET. 
    // Per definition, there is no alternative top nodeWe don't really have a different cluster to choose from...
    dfu.set_overall_score (score);
    if (score != MATCH_MET) {
        errno = EBUSY;
        return -1;
    }
    return 0;
}

int greater_interval_first_t::dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu)
{
    std::vector<resource_type_t> types;
    dfu.resrc_types (subsystem, types);
    for (auto &type : types)
        dfu.choose_accum_all (subsystem, type);
    return 0;
}

// called on each postorder visit of a vertex in the dominant subsystem aka the important part
int greater_interval_first_t::dom_finish_vtx (vtx_t u,
                                              subsystem_t subsystem,
                                              const std::vector<Flux::Jobspec::Resource> &resources,
                                              const resource_graph_t &g,
                                              scoring_api_t &dfu)
{
    int64_t score = MATCH_MET;
    int64_t overall;

    for (auto &resource : resources) {
        if (resource_type_t{resource.type} != g[u].type)
            continue;

        // jobspec resource type matches with the visiting vertex
        // c_resource: child resource. Whit is read literally: Node with Cores. With is a vector of children
        // if we are currently at a leaf note (e.g a core), resurce.with is empty ant this section gets skipped
        for (auto &c_resource : resource.with) {
            // test children resource count requirements
            const auto &c_type = resource_type_t{c_resource.type};
            // how many of the resource type are available
            unsigned int qc = dfu.qualified_count (subsystem, c_type);
            // calculate the count of the resource that should be allocated based on number of available resources and the desired resource count (min, max, ...) in the JobSpec
            unsigned int count = calc_count (c_resource, qc);
            // requested resources not available
            if (count == 0) {
                score = MATCH_UNMET;
                break;
            }

            // look at all the core candidates in the pool, sort the best-score first, take 4
            // here it might be relevant for me to score the cores according to my spread pattern
            dfu.choose_accum_best_k (subsystem, c_type, count);
        }
    }

    // set the score for the current node
    overall = (score == MATCH_MET) ? (score + g[u].id + 1) : score;
    dfu.set_overall_score (overall);

    // no idea why this is necessary, ignore for now
    decr ();

    // no match found
    if (score != MATCH_MET) {
        errno = EBUSY;
        return -1;
    }
    // success!
    return 0;
}

}  // namespace resource_model
}  // namespace Flux

/*
 * vi:tabstop=4 shiftwidth=4 expandtab
 */
