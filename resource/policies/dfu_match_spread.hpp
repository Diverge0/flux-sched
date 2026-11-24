/*****************************************************************************\
 * Copyright 2014 Lawrence Livermore National Security, LLC
 * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
 *
 * This file is part of the Flux resource manager framework.
 * For details, see https://github.com/flux-framework.
 *
 * SPDX-License-Identifier: LGPL-3.0
\*****************************************************************************/

#ifndef DFU_MATCH_SPREAD_HPP
#define DFU_MATCH_SPREAD_HPP

#include <iostream>
#include <vector>
#include <numeric>
#include <map>
#include <boost/icl/interval.hpp>
#include <boost/icl/interval_set.hpp>
#include "resource/policies/base/dfu_match_cb.hpp"

namespace Flux {
namespace resource_model {

/*! Spread policy: 
 *  Spreads the cores in a node to facilitate efficient Co-Scheduling.
 */
struct node_spread_t : public dfu_match_cb_t {
    node_spread_t ();
    node_spread_t (const std::string &name);
    node_spread_t (const node_spread_t &o);
    node_spread_t &operator= (const node_spread_t &o);
    ~node_spread_t ();

    int dom_finish_graph (subsystem_t subsystem,
                          const std::vector<Flux::Jobspec::Resource> &resources,
                          const resource_graph_t &g,
                          scoring_api_t &dfu);

    int dom_finish_vtx (vtx_t u,
                        subsystem_t subsystem,
                        const std::vector<Flux::Jobspec::Resource> &resources,
                        const resource_graph_t &g,
                        scoring_api_t &dfu);

    int dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu);
};

}  // namespace resource_model
}  // namespace Flux

#endif  // DFU_MATCH_SPREAD_HPP

/*
 * vi:tabstop=4 shiftwidth=4 expandtab
 */
