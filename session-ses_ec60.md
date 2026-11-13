# Resource match policies overview

**Session ID:** ses_ec604f4d2ffei24GS5NoDIrSTS
**Created:** 10/14/2026, 10:35:16 AM
**Updated:** 10/14/2026, 10:37:23 AM

---

## User

please explain the resource match policies in resources/policies

---

## Assistant (Plan · alias-code · 7.1s)

_Thinking:_

The user is asking for an explanation of the resource matching policy in resources/policies. This is an explanation task, not an editing task. Plan mode is enabled, but this is a read-only exploration task anyway. Let me investigate the codebase.

First, let me take a look at the directory structure.




I'll explore the resource match policies in the codebase to understand them.





**Tool: glob**

**Input:**
```json
{
  "pattern": "resources/policies/**/*"
}
```

**Output:**
```
No files found
```

**Tool: glob**

**Input:**
```json
{
  "pattern": "resources/**/*.md"
}
```

**Output:**
```
No files found
```

**Tool: bash**

**Input:**
```json
{
  "command": "ls -la resources/ 2>/dev/null; echo \"---\"; ls -la resources/policies/ 2>/dev/null"
}
```

**Output:**
```
---

```

---

## Assistant (Plan · alias-code · 3.4s)

_Thinking:_

The `resources/` directory doesn't exist at the root of the current working directory. Let's check the working directory and look for the actual location.




Let me check the current directory structure to find where the resources/policies directory is located.



**Tool: bash**

**Input:**
```json
{
  "command": "pwd; echo \"---\"; ls -la"
}
```

**Output:**
```
/workspaces/flux-sched
---
total 136
drwxr-xr-x. 1 vscode vscode   642 Oct 14 10:26 .
drwxr-xr-t. 1 root   root      20 Oct 14 10:29 ..
-rw-r--r--. 1 vscode vscode  1151 Oct 14 08:53 .clang-format
-rwxr-xr-x. 1 vscode vscode   417 Oct 14 08:53 .configure-custom.sh
drwxr-xr-x. 1 vscode vscode    98 Oct 14 10:28 .devcontainer
drwxr-xr-x. 1 vscode vscode   138 Oct 14 10:29 .git
drwxr-xr-x. 1 vscode vscode    18 Oct 14 08:53 .github
-rw-r--r--. 1 vscode vscode  1649 Oct 14 10:19 .gitignore
-rw-r--r--. 1 vscode vscode   984 Oct 14 08:53 .mergify.yml
drwxr-xr-x. 1 vscode vscode   128 Oct 14 10:29 .opencode
-rw-r--r--. 1 vscode vscode   995 Oct 14 08:53 .pre-commit-config.yaml
-rw-r--r--. 1 vscode vscode   362 Oct 14 08:53 .readthedocs.yaml
-rw-r--r--. 1 vscode vscode   432 Oct 14 08:53 .ruff.toml
-rw-r--r--. 1 vscode vscode   449 Oct 14 08:53 .typos.toml
-rw-r--r--. 1 vscode vscode 11353 Oct 14 08:53 CMakeLists.txt
-rw-r--r--. 1 vscode vscode  3769 Oct 14 08:53 CMakePresets.json
-rw-r--r--. 1 vscode vscode  7652 Oct 14 08:53 LICENSE
-rw-r--r--. 1 vscode vscode 38569 Oct 14 08:53 NEWS.md
-rw-r--r--. 1 vscode vscode  1167 Oct 14 08:53 NOTICE.LLNS
-rw-r--r--. 1 vscode vscode  7428 Oct 14 08:53 README.md
drwxr-xr-x. 1 vscode vscode   268 Oct 14 08:53 cmake
-rw-r--r--. 1 vscode vscode   342 Oct 14 08:53 codecov.yml
-rw-r--r--. 1 vscode vscode    88 Oct 14 08:53 config.h.in
-rwxr-xr-x. 1 vscode vscode 11392 Oct 14 08:53 configure
drwxr-xr-x. 1 vscode vscode   158 Oct 14 08:53 debian
drwxr-xr-x. 1 vscode vscode   208 Oct 14 08:53 doc
drwxr-xr-x. 1 vscode vscode    64 Oct 14 08:53 etc
drwxr-xr-x. 1 vscode vscode    40 Oct 14 08:53 external
-rw-r--r--. 1 vscode vscode    94 Oct 14 08:53 flux-plugin.map
drwxr-xr-x. 1 vscode vscode    70 Oct 14 08:53 qmanager
drwxr-xr-x. 1 vscode vscode   256 Oct 14 08:53 resource
drwxr-xr-x. 1 vscode vscode   222 Oct 14 08:53 scripts
drwxr-xr-x. 1 vscode vscode    66 Oct 14 08:53 src
drwxr-xr-x. 1 vscode vscode  5340 Oct 14 08:53 t
-rw-r--r--. 1 vscode vscode  2607 Oct 14 08:53 vscode.md

```

---

## Assistant (Plan · alias-code · 4.2s)

_Thinking:_

The user asked about "resources/policies", but in this repository there is a `resource/` directory. Let me search for "policies" within the repository.


**Tool: bash**

**Input:**
```json
{
  "command": "ls -la resource/; echo \"---\"; find . -type d -name \"policies\" 2>/dev/null"
}
```

**Output:**
```
total 8
drwxr-xr-x. 1 vscode vscode  256 Oct 14 08:53 .
drwxr-xr-x. 1 vscode vscode  642 Oct 14 10:26 ..
-rw-r--r--. 1 vscode vscode  217 Oct 14 08:53 .gitignore
-rw-r--r--. 1 vscode vscode 3485 Oct 14 08:53 CMakeLists.txt
drwxr-xr-x. 1 vscode vscode   38 Oct 14 08:53 config
drwxr-xr-x. 1 vscode vscode  384 Oct 14 08:53 evaluators
drwxr-xr-x. 1 vscode vscode   44 Oct 14 08:53 jobinfo
drwxr-xr-x. 1 vscode vscode  384 Oct 14 08:53 libjobspec
drwxr-xr-x. 1 vscode vscode  246 Oct 14 08:53 modules
drwxr-xr-x. 1 vscode vscode   44 Oct 14 08:53 planner
drwxr-xr-x. 1 vscode vscode  552 Oct 14 08:53 policies
drwxr-xr-x. 1 vscode vscode  944 Oct 14 08:53 readers
drwxr-xr-x. 1 vscode vscode   52 Oct 14 08:53 reapi
drwxr-xr-x. 1 vscode vscode  474 Oct 14 08:53 schema
drwxr-xr-x. 1 vscode vscode   96 Oct 14 08:53 store
drwxr-xr-x. 1 vscode vscode  314 Oct 14 08:53 traversers
drwxr-xr-x. 1 vscode vscode  190 Oct 14 08:53 utilities
drwxr-xr-x. 1 vscode vscode  104 Oct 14 08:53 writers
---
./qmanager/policies
./resource/policies

```

**Tool: grep**

**Input:**
```json
{
  "pattern": "policy",
  "include": "*.rst"
}
```

**Output:**
```
Found 30 matches
/workspaces/flux-sched/doc/man5/flux-config-sched-fluxion-resource.rst:
  Line 17: match-policy

  Line 18:     (optional) String name of match policy to use. The supported

  Line 84:     the ``low`` policy (e.g., for node-local resource types).

  Line 88:     the ``high`` policy (e.g., for node-local resource types).

  Line 115: policy

  Line 116:     Allowed options are ``low`` or ``high``. If only ``policy=low``

  Line 117:     or ``policy=high`` is specified, the behavior of the match policy is the

  Line 118:     same as if ``match-policy=low`` or ``match-policy=high`` were selected,

  Line 140:     match-policy = "policy=high node_exclusive=true set_stop_on_1_matches=true"

  Line 153:     match-policy = "lonodex"


/workspaces/flux-sched/doc/man5/flux-config-sched-fluxion-qmanager.rst:
  Line 17: queue-policy

  Line 18:     (optional) String name of queuing policy to use. The

  Line 38: The following keys in the optional ``[policy-params]`` table can be

  Line 41: policy-params.max-reservation-depth

  Line 42:     (optional) Only applied to the ``conservative`` or ``hybrid`` policy

  Line 50: policy-params.reservation-depth

  Line 51:     (optional) Only applied to the ``hybrid`` policy

  Line 58:     If it is larger than ``policy-params.max-reservation-depth``,

  Line 59:     it is set to ``policy-params.max-reservation-depth`` instead.

  Line 68:     First come, first served policy if the priority of

  Line 75:     EASY-backfilling policy: If the highest-priority

  Line 83:     CONSERVATIVE-backfilling policy: Similarly to ``easy``,

  Line 86:     are currently unavailable. However, this policy

  Line 93:     HYBRID-backfilling policy: This is an optimization

  Line 98:     N can be configured by the ``policy-params.reservation-depth``

  Line 99:     parameter: see ``policy-params.reservation-depth``

  Line 109:    # queuing policy type

  Line 110:    queue-policy = "hybrid"

  Line 118:    # queue policy parameters

  Line 119:    [sched-fluxion-qmanager.policy-params]

```

---

## Assistant (Plan · alias-code · 3.7s)

_Thinking:_

Found it. There are two `policies` directories:
- `qmanager/policies` - queuing policies (not what the user is asking about)
- `resource/policies` - resource matching policies (what the user is asking about)

The user is asking about "resource match policies", so they're referring to `resource/policies`. Let's explore this.




Found it - there's a `resource/policies` directory. Let me explore its contents.



**Tool: bash**

**Input:**
```json
{
  "command": "ls -la resource/policies/"
}
```

**Output:**
```
total 56
drwxr-xr-x. 1 vscode vscode  552 Oct 14 08:53 .
drwxr-xr-x. 1 vscode vscode  256 Oct 14 08:53 ..
-rw-r--r--. 1 vscode vscode   25 Oct 14 08:53 CMakeLists.txt
drwxr-xr-x. 1 vscode vscode  188 Oct 14 08:53 base
-rw-r--r--. 1 vscode vscode  927 Oct 14 08:53 dfu_match_high_id_first.hpp
-rw-r--r--. 1 vscode vscode 3693 Oct 14 08:53 dfu_match_locality.cpp
-rw-r--r--. 1 vscode vscode 1839 Oct 14 08:53 dfu_match_locality.hpp
-rw-r--r--. 1 vscode vscode  918 Oct 14 08:53 dfu_match_low_id_first.hpp
-rw-r--r--. 1 vscode vscode 4828 Oct 14 08:53 dfu_match_multilevel_id.hpp
-rw-r--r--. 1 vscode vscode 7414 Oct 14 08:53 dfu_match_multilevel_id_impl.hpp
-rw-r--r--. 1 vscode vscode 7972 Oct 14 08:53 dfu_match_policy_factory.cpp
-rw-r--r--. 1 vscode vscode 1937 Oct 14 08:53 dfu_match_policy_factory.hpp
-rw-r--r--. 1 vscode vscode 3865 Oct 14 08:53 dfu_match_var_aware.cpp
-rw-r--r--. 1 vscode vscode 1659 Oct 14 08:53 dfu_match_var_aware.hpp

```

---

## Assistant (Plan · alias-code · 4.8s)

_Thinking:_

Now I've been able to confirm the files. To understand the resource matching policy, I'll read all the relevant files. I'll read them in parallel.


**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_policy_factory.cpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_policy_factory.cpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: extern "C" {
12: #if HAVE_CONFIG_H
13: #include <config.h>
14: #endif
15: }
16: #include <array>
17: #include <boost/algorithm/string.hpp>
18: #include "resource/policies/dfu_match_policy_factory.hpp"
19: 
20: namespace Flux {
21: namespace resource_model {
22: 
23: const std::map<std::string, std::string> policies =
24:     {{"first", "policy=high node_centric=true stop_on_1_matches=true"},
25:      {"firstnodex", "policy=high node_centric=true node_exclusive=true stop_on_1_matches=true"},
26:      {"high", "policy=high"},
27:      {"low", "policy=low"},
28:      {"lonode", "policy=low node_centric=true"},
29:      {"hinode", "policy=high node_centric=true"},
30:      {"lonodex", "policy=low node_centric=true node_exclusive=true"},
31:      {"hinodex", "policy=high node_centric=true node_exclusive=true"},
32:      {"locality", ""},
33:      {"variation", ""}};
34: 
35: const std::vector<std::string> policy_options = {"policy",
36:                                                  "node_centric",
37:                                                  "stop_on_1_matches",
38:                                                  "node_exclusive"};
39: 
40: /* This takes a string of match policy options, deliniated by
41:  * spaces and equals signs, and turns them into a std::map.
42:  * It validates that each option is set to either "true" or "false"
43:  * and puts the corresponding boolean in the map.
44:  */
45: bool parse_custom_match_policy (const std::string long_string,
46:                                 std::map<std::string, bool> &split,
47:                                 std::string &error_str)
48: {
49:     std::vector<std::string> options;
50:     boost::split (options, long_string, boost::is_any_of (" "));
51:     /* After splitting based on term, validate the terms. If invalid,
52:      * abort.
53:      */
54:     for (int i = 0; i < options.size (); i++) {
55:         std::vector<std::string> settings;
56:         /* This split should take an entire string and split it
57:          * on the equals sign. If there's no equals sign, maybe it will
58:          * get caught later?
59:          */
60:         boost::split (settings, options.at (i), boost::is_any_of ("="));
61:         /* Place the terms in a map for ease of access. Lots of gross
62:          * temporary structures needed here, hopefully they'll get
63:          * garbage collected soon.
64:          */
65:         if (std::find (policy_options.begin (), policy_options.end (), settings.at (0))
66:             == policy_options.end ()) {
67:             error_str += std::basic_string ("invalid policy option: ") += settings.at (0) +=
68:                 std::basic_string ("\n");
69:             return false;
70:         } else {
71:             if (settings.at (0).compare ("policy") == 0) {
72:                 /* This is the one option we want to allow to be something other than "true"
73:                  * or "false." It should take "low" or "high." Maybe other things in the
74:                  * future, too.
75:                  */
76:                 if (settings.at (1).compare ("high") == 0) {
77:                     const auto [it, success] = split.insert ({"high", true});
78:                     if (success == false) {
79:                         error_str += std::basic_string ("Insertion of ") +=
80:                             std::basic_string (it->first) += std::basic_string (" failed\n");
81:                     }
82:                 } else if (settings.at (1).compare ("low") == 0) {
83:                     const auto [it, success] = split.insert ({"low", true});
84:                     if (success == false) {
85:                         error_str += std::basic_string ("Insertion of ") +=
86:                             std::basic_string (it->first) += std::basic_string (" failed\n");
87:                     }
88:                 } else {
89:                     error_str += "policy key within custom policy accepts only low or high\n";
90:                     return false;
91:                 }
92:             } else if (settings.at (1).compare ("true") == 0) {
93:                 const auto [it, success] = split.insert ({settings.at (0), true});
94:                 if (success == false) {
95:                     error_str += std::basic_string ("Insertion of ") +=
96:                         std::basic_string (it->first) += std::basic_string (" failed\n");
97:                 }
98:             } else if (settings.at (1).compare ("false") == 0) {
99:                 const auto [it, success] = split.insert ({settings.at (0), false});
100:                 if (success == false) {
101:                     error_str += std::basic_string ("Insertion of ") +=
102:                         std::basic_string (it->first) += std::basic_string (" failed\n");
103:                     return false;
104:                 }
105:             } else {
106:                 error_str += std::basic_string ("Policy option ") +=
107:                     std::basic_string (settings.at (0)) +=
108:                     std::basic_string (" requires true or false, got ") +=
109:                     std::basic_string (settings.at (1)) += std::basic_string ("\n");
110:                 return false;
111:             }
112:         }
113:     }
114:     return true;
115: }
116: 
117: bool known_match_policy (const std::string &policy, std::string &error_str)
118: {
119:     std::map<std::string, bool> throw_away;
120:     if (policies.contains (policy)) {
121:         return true;
122:     } else if (parse_custom_match_policy (policy, throw_away, error_str) == true) {
123:         return true;
124:     }
125:     return false;
126: }
127: 
128: bool parse_bool_match_options (const std::string match_option, std::map<std::string, bool> &policy)
129: {
130:     if ((policy.find (match_option) != policy.end ()) && (policy[match_option] == true)) {
131:         return true;
132:     }
133:     return false;
134: }
135: 
136: std::shared_ptr<dfu_match_cb_t> create_match_cb (const std::string &policy_requested)
137: {
138:     std::map<std::string, bool> policy;
139:     std::string error_str;
140:     if (policies.contains (policy_requested)) {
141:         parse_custom_match_policy (policies.find (policy_requested)->second, policy, error_str);
142:     } else {
143:         parse_custom_match_policy (policy_requested, policy, error_str);
144:     }
145:     std::shared_ptr<dfu_match_cb_t> matcher = nullptr;
146:     try {
147:         if (policy_requested == "locality") {
148:             matcher = std::make_shared<greater_interval_first_t> ();
149:         }
150:         if (policy_requested == "variation") {
151:             matcher = std::make_shared<var_aware_t> ();
152:         }
153: 
154:         if (parse_bool_match_options ("high", policy)) {
155:             std::shared_ptr<high_first_t> ptr = std::make_shared<high_first_t> ();
156:             if (parse_bool_match_options ("node_centric", policy)) {
157:                 ptr->add_score_factor (node_rt, 1, 10000);
158:             }
159: 
160:             if (parse_bool_match_options ("node_exclusive", policy)) {
161:                 ptr->add_exclusive_resource_type (node_rt);
162:             }
163: 
164:             if (parse_bool_match_options ("stop_on_1_matches", policy)) {
165:                 ptr->set_stop_on_k_matches (1);
166:             }
167:             matcher = ptr;
168: 
169:         } else if (parse_bool_match_options ("low", policy)) {
170:             std::shared_ptr<low_first_t> ptr = std::make_shared<low_first_t> ();
171:             if (parse_bool_match_options ("node_centric", policy)) {
172:                 ptr->add_score_factor (node_rt, 1, 10000);
173:             }
174: 
175:             if (parse_bool_match_options ("node_exclusive", policy)) {
176:                 ptr->add_exclusive_resource_type (node_rt);
177:             }
178: 
179:             if (parse_bool_match_options ("stop_on_1_matches", policy)) {
180:                 ptr->set_stop_on_k_matches (1);
181:             }
182:             matcher = ptr;
183:         }
184: 
185:     } catch (std::bad_alloc &e) {
186:         errno = ENOMEM;
187:         matcher = nullptr;
188:     }
189: 
190:     return matcher;
191: }
192: 
193: }  // namespace resource_model
194: }  // namespace Flux
195: 
196: /*
197:  * vi:tabstop=4 shiftwidth=4 expandtab
198:  */

(End of file - total 198 lines)
</content>
```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_policy_factory.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_policy_factory.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef DFU_MATCH_POLICY_FACTORY_HPP
12: #define DFU_MATCH_POLICY_FACTORY_HPP
13: 
14: #include <string>
15: #include <memory>
16: #include <map>
17: #include "resource/policies/base/dfu_match_cb.hpp"
18: #include "resource/policies/dfu_match_high_id_first.hpp"
19: #include "resource/policies/dfu_match_low_id_first.hpp"
20: #include "resource/policies/dfu_match_locality.hpp"
21: #include "resource/policies/dfu_match_var_aware.hpp"
22: #include "resource/policies/dfu_match_multilevel_id.hpp"
23: #include "resource/policies/dfu_match_multilevel_id_impl.hpp"
24: 
25: namespace Flux {
26: namespace resource_model {
27: 
28: bool known_match_policy (const std::string &policy, std::string &error);
29: 
30: /* Returns true if the custom match policy is valid.
31:  * Returns false if it is invalid.
32:  * Stores all of the options requested in the map under
33:  * key-value pairs.
34:  */
35: bool parse_custom_match_policy (const std::string long_string,
36:                                 std::map<std::string, bool> &split,
37:                                 std::string &error);
38: 
39: /* Included in the header for unit testing.
40:  * This is how the map keys get accessed and returned easily.
41:  */
42: bool parse_bool_match_options (const std::string match_option, std::map<std::string, bool> &policy);
43: 
44: /*! Factory method for creating a matching callback
45:  *  object, representing a matching policy.
46:  */
47: std::shared_ptr<dfu_match_cb_t> create_match_cb (const std::string &policy);
48: 
49: }  // namespace resource_model
50: }  // namespace Flux
51: 
52: #endif  // DFU_MATCH_POLICY_FACTORY_HPP
53: 
54: /*
55:  * vi:tabstop=4 shiftwidth=4 expandtab
56:  */

(End of file - total 56 lines)
</content>
```

**Tool: bash**

**Input:**
```json
{
  "command": "ls -la resource/policies/base/"
}
```

**Output:**
```
total 44
drwxr-xr-x. 1 vscode vscode  188 Oct 14 08:53 .
drwxr-xr-x. 1 vscode vscode  552 Oct 14 08:53 ..
-rw-r--r--. 1 vscode vscode   92 Oct 14 08:53 CMakeLists.txt
-rw-r--r--. 1 vscode vscode 3375 Oct 14 08:53 dfu_match_cb.cpp
-rw-r--r--. 1 vscode vscode 6733 Oct 14 08:53 dfu_match_cb.hpp
-rw-r--r--. 1 vscode vscode 1845 Oct 14 08:53 match_op.cpp
-rw-r--r--. 1 vscode vscode 1014 Oct 14 08:53 match_op.h
-rw-r--r--. 1 vscode vscode 9876 Oct 14 08:53 matcher.cpp
-rw-r--r--. 1 vscode vscode 6492 Oct 14 08:53 matcher.hpp
drwxr-xr-x. 1 vscode vscode  190 Oct 14 08:53 test

```

---

## Assistant (Plan · alias-code · 7.5s)

_Thinking:_

Next, I'll read the base matching callback interface and individual policies. I'll load them in parallel.




Now let me read the base interface and the individual policy implementations.








**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/base/dfu_match_cb.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/base/dfu_match_cb.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef DFU_MATCH_CB_HPP
12: #define DFU_MATCH_CB_HPP
13: 
14: #include <set>
15: #include <map>
16: #include <vector>
17: #include <cstdint>
18: #include <iostream>
19: #include "resource/libjobspec/jobspec.hpp"
20: #include "resource/schema/resource_graph.hpp"
21: #include "resource/evaluators/scoring_api.hpp"
22: #include "resource/policies/base/matcher.hpp"
23: #include "resource/planner/c/planner.h"
24: 
25: namespace Flux {
26: namespace resource_model {
27: 
28: /*! Base DFU matcher class.
29:  *  Define the set of visitor methods that are called
30:  *  back by a DFU resource-graph traverser.
31:  */
32: class dfu_match_cb_t : public matcher_data_t, public matcher_util_api_t {
33:    public:
34:     dfu_match_cb_t ();
35:     dfu_match_cb_t (const std::string &name);
36:     dfu_match_cb_t (const dfu_match_cb_t &o);
37:     dfu_match_cb_t &operator= (const dfu_match_cb_t &o);
38:     virtual ~dfu_match_cb_t ();
39: 
40:     /*!
41:      *  Called back when all of the graph vertices and edges have been visited.
42:      *  Must be overridden by a derived class if this visit event should
43:      *  be programed.
44:      *
45:      *  \param subsystem subsystem_t object of the dominant subsystem.
46:      *  \param resources vector of resources to be matched.
47:      *  \param g         filtered resource graph.
48:      *  \param dfu       score interface object - See utilities/README.md
49:      *  \return          return 0 on success; otherwise -1.
50:      */
51:     virtual int dom_finish_graph (subsystem_t subsystem,
52:                                   const std::vector<Flux::Jobspec::Resource> &resources,
53:                                   const resource_graph_t &g,
54:                                   scoring_api_t &dfu);
55: 
56:     /*!
57:      * Called back on each postorder visit of a group of slot resources
58:      * (resources that can be contained within one or more slots) of the
59:      * dominant subsystem.
60:      */
61:     virtual int dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu);
62: 
63:     /*!
64:      *  Called back on each preorder visit of the dominant subsystem.
65:      *  Must be overridden by a derived class if this visit event should
66:      *  be programed.
67:      *
68:      *  \param u         descriptor of the visiting vertex.
69:      *  \param subsystem subsystem_t object of the dominant subsystem.
70:      *  \param resources vector of resources to be matched (resource section
71:      *                   of a jobspec).
72:      *  \param g         filtered resource graph.
73:      *
74:      *  \return          return 0 on success; otherwise -1.
75:      */
76:     virtual int dom_discover_vtx (vtx_t u,
77:                                   subsystem_t subsystem,
78:                                   const std::vector<Flux::Jobspec::Resource> &resources,
79:                                   const resource_graph_t &g);
80: 
81:     /*!
82:      *  Called back on each postorder visit of the dominant subsystem.
83:      *  Must be overridden by a derived class if this visit event should
84:      *  be programed.
85:      *  Should return a score calculated based on the subtree and up walks
86:      *  using the score API object (dfu). Any score above MATCH_MET
87:      *  is qualified to be a match.
88:      *
89:      *  \param u         descriptor of the visiting vertex
90:      *  \param subsystem subsystem_t object of the dominant subsystem
91:      *  \param resources vector of resources to be matched
92:      *  \param g         filtered resource graph
93:      *  \param dfu       score interface object -- See utilities/README.md
94:      *
95:      *  \return          return 0 on success; otherwise -1
96:      */
97:     virtual int dom_finish_vtx (vtx_t u,
98:                                 subsystem_t subsystem,
99:                                 const std::vector<Flux::Jobspec::Resource> &resources,
100:                                 const resource_graph_t &g,
101:                                 scoring_api_t &dfu);
102: 
103:     /*! Called back on each pre-up visit of an auxiliary subsystem.
104:      *  Must be overridden by a derived class if this visit event should
105:      *  be programed.
106:      *
107:      *  \param u         descriptor of the visiting vertex
108:      *  \param subsystem subsystem_t of the auxiliary subsystem being walked
109:      *  \param resources vector of resources to be matched
110:      *  \param g         filtered resource graph
111:      *
112:      *  \return          return 0 on success; otherwise -1
113:      */
114:     virtual int aux_discover_vtx (vtx_t u,
115:                                   subsystem_t subsystem,
116:                                   const std::vector<Flux::Jobspec::Resource> &resources,
117:                                   const resource_graph_t &g);
118: 
119:     /*
120:      *  Called back on each post-up visit of the auxiliary subsystem.
121:      *  Must be overridden by a derived class if this visit event should
122:      *  be programed. Should return a score calculated based on the subtree
123:      *  and up walks using the score API object (dfu).
124:      *  Any score above MATCH_MET is qualified to be a match.
125:      *
126:      *  \param u         descriptor of the visiting vertex
127:      *  \param subsystem subsystem_t object of an auxiliary subsystem
128:      *  \param resources vector of resources to be matched
129:      *  \param g         filtered resource graph object
130:      *  \param dfu       score interface object - -- See utilities/README.md
131:      *
132:      *  \return          return 0 on success; otherwise -1
133:      */
134:     virtual int aux_finish_vtx (vtx_t u,
135:                                 subsystem_t subsystem,
136:                                 const std::vector<Flux::Jobspec::Resource> &resources,
137:                                 const resource_graph_t &g,
138:                                 scoring_api_t &dfu);
139: 
140:     /*
141:      * Set a knob to limit graph traversal: i.g., stop traversing
142:      * when k instances of qualified matches are found for each requested
143:      * resource type.
144:      *
145:      *  \param k         num of qualified matches
146:      *
147:      *  \return          return 0 on success; otherwise -1
148:      */
149:     virtual int set_stop_on_k_matches (unsigned int k);
150: 
151:     /*
152:      * Return the knob to limit graph traversal: i.g., stop traversing
153:      * when k instances of qualified matches are found for each requested
154:      * resource type.
155:      */
156:     virtual int get_stop_on_k_matches () const;
157: 
158:     void incr ();
159:     void decr ();
160:     std::string level ();
161: 
162:    private:
163:     int m_trav_level;
164: };
165: 
166: }  // namespace resource_model
167: }  // namespace Flux
168: 
169: #endif  // DFU_MATCH_CB_HPP
170: 
171: /*
172:  * vi:tabstop=4 shiftwidth=4 expandtab
173:  */

(End of file - total 173 lines)
</content>
```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_high_id_first.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_high_id_first.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef DFU_MATCH_HIGH_ID_FIRST_HPP
12: #define DFU_MATCH_HIGH_ID_FIRST_HPP
13: 
14: #include "resource/policies/base/dfu_match_cb.hpp"
15: #include "resource/policies/dfu_match_multilevel_id.hpp"
16: 
17: namespace Flux {
18: namespace resource_model {
19: 
20: /* High ID first policy: select resources of each type
21:  * with higher numeric IDs.
22:  */
23: using high_first_t = multilevel_id_t<fold::greater>;
24: 
25: }  // namespace resource_model
26: }  // namespace Flux
27: 
28: #endif  // DFU_MATCH_HIGH_ID_FIRST_HPP
29: 
30: /*
31:  * vi:tabstop=4 shiftwidth=4 expandtab
32:  */

(End of file - total 32 lines)
</content>
```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_low_id_first.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_low_id_first.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef DFU_MATCH_LOW_ID_FIRST_HPP
12: #define DFU_MATCH_LOW_ID_FIRST_HPP
13: 
14: #include "resource/policies/base/dfu_match_cb.hpp"
15: #include "resource/policies/dfu_match_multilevel_id.hpp"
16: 
17: namespace Flux {
18: namespace resource_model {
19: 
20: /* Low ID first policy: select resources of each type
21:  * with lower numeric IDs.
22:  */
23: using low_first_t = multilevel_id_t<fold::less>;
24: 
25: }  // namespace resource_model
26: }  // namespace Flux
27: 
28: #endif  // DFU_MATCH_LOW_ID_FIRST_HPP
29: 
30: /*
31:  * vi:tabstop=4 shiftwidth=4 expandtab
32:  */

(End of file - total 32 lines)
</content>
```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_locality.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_locality.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef DFU_MATCH_LOCALITY_HPP
12: #define DFU_MATCH_LOCALITY_HPP
13: 
14: #include <iostream>
15: #include <vector>
16: #include <numeric>
17: #include <map>
18: #include <boost/icl/interval.hpp>
19: #include <boost/icl/interval_set.hpp>
20: #include "resource/policies/base/dfu_match_cb.hpp"
21: 
22: namespace Flux {
23: namespace resource_model {
24: 
25: /*! Locality-aware policy: select resources of each type
26:  *  where you have more qualified.
27:  */
28: struct greater_interval_first_t : public dfu_match_cb_t {
29:     greater_interval_first_t ();
30:     greater_interval_first_t (const std::string &name);
31:     greater_interval_first_t (const greater_interval_first_t &o);
32:     greater_interval_first_t &operator= (const greater_interval_first_t &o);
33:     ~greater_interval_first_t ();
34: 
35:     int dom_finish_graph (subsystem_t subsystem,
36:                           const std::vector<Flux::Jobspec::Resource> &resources,
37:                           const resource_graph_t &g,
38:                           scoring_api_t &dfu);
39: 
40:     int dom_finish_vtx (vtx_t u,
41:                         subsystem_t subsystem,
42:                         const std::vector<Flux::Jobspec::Resource> &resources,
43:                         const resource_graph_t &g,
44:                         scoring_api_t &dfu);
45: 
46:     int dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu);
47: };
48: 
49: }  // namespace resource_model
50: }  // namespace Flux
51: 
52: #endif  // DFU_MATCH_LOCALITY_HPP
53: 
54: /*
55:  * vi:tabstop=4 shiftwidth=4 expandtab
56:  */

(End of file - total 56 lines)
</content>
```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_locality.cpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_locality.cpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: extern "C" {
12: #if HAVE_CONFIG_H
13: #include <config.h>
14: #endif
15: }
16: 
17: #include "resource/policies/dfu_match_locality.hpp"
18: 
19: namespace Flux {
20: namespace resource_model {
21: 
22: greater_interval_first_t::greater_interval_first_t ()
23: {
24: }
25: 
26: greater_interval_first_t::greater_interval_first_t (const std::string &name) : dfu_match_cb_t (name)
27: {
28: }
29: 
30: greater_interval_first_t::greater_interval_first_t (const greater_interval_first_t &o)
31:     : dfu_match_cb_t (o)
32: {
33: }
34: 
35: greater_interval_first_t &greater_interval_first_t::operator= (const greater_interval_first_t &o)
36: {
37:     dfu_match_cb_t::operator= (o);
38:     return *this;
39: }
40: 
41: greater_interval_first_t::~greater_interval_first_t ()
42: {
43: }
44: 
45: int greater_interval_first_t::dom_finish_graph (
46:     subsystem_t subsystem,
47:     const std::vector<Flux::Jobspec::Resource> &resources,
48:     const resource_graph_t &g,
49:     scoring_api_t &dfu)
50: {
51:     using namespace boost::icl;
52:     int score = MATCH_MET;
53:     fold::interval_greater comp;
54: 
55:     for (auto &resource : resources) {
56:         unsigned int qc = dfu.qualified_count (subsystem, resource.type);
57:         unsigned int count = calc_count (resource, qc);
58:         if (count == 0) {
59:             score = MATCH_UNMET;
60:             break;
61:         }
62:         dfu.transform (subsystem,
63:                        resource.type,
64:                        boost::icl::inserter (comp.ivset, comp.ivset.end ()),
65:                        fold::to_interval);
66:         dfu.choose_accum_best_k (subsystem, resource.type, count, comp);
67:     }
68:     dfu.set_overall_score (score);
69:     if (score != MATCH_MET) {
70:         errno = EBUSY;
71:         return -1;
72:     }
73:     return 0;
74: }
75: 
76: int greater_interval_first_t::dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu)
77: {
78:     std::vector<resource_type_t> types;
79:     dfu.resrc_types (subsystem, types);
80:     for (auto &type : types)
81:         dfu.choose_accum_all (subsystem, type);
82:     return 0;
83: }
84: 
85: int greater_interval_first_t::dom_finish_vtx (vtx_t u,
86:                                               subsystem_t subsystem,
87:                                               const std::vector<Flux::Jobspec::Resource> &resources,
88:                                               const resource_graph_t &g,
89:                                               scoring_api_t &dfu)
90: {
91:     int64_t score = MATCH_MET;
92:     int64_t overall;
93: 
94:     for (auto &resource : resources) {
95:         if (resource_type_t{resource.type} != g[u].type)
96:             continue;
97: 
98:         // jobspec resource type matches with the visiting vertex
99:         for (auto &c_resource : resource.with) {
100:             // test children resource count requirements
101:             const auto &c_type = resource_type_t{c_resource.type};
102:             unsigned int qc = dfu.qualified_count (subsystem, c_type);
103:             unsigned int count = calc_count (c_resource, qc);
104:             if (count == 0) {
105:                 score = MATCH_UNMET;
106:                 break;
107:             }
108:             dfu.choose_accum_best_k (subsystem, c_type, count);
109:         }
110:     }
111: 
112:     overall = (score == MATCH_MET) ? (score + g[u].id + 1) : score;
113:     dfu.set_overall_score (overall);
114:     decr ();
115:     if (score != MATCH_MET) {
116:         errno = EBUSY;
117:         return -1;
118:     }
119:     return 0;
120: }
121: 
122: }  // namespace resource_model
123: }  // namespace Flux
124: 
125: /*
126:  * vi:tabstop=4 shiftwidth=4 expandtab
127:  */

(End of file - total 127 lines)
</content>
```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_var_aware.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_var_aware.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2019 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef DFU_MATCH_VAR_AWARE_HPP
12: #define DFU_MATCH_VAR_AWARE_HPP
13: 
14: #include <iostream>
15: #include <vector>
16: #include <numeric>
17: #include <map>
18: #include "resource/policies/base/dfu_match_cb.hpp"
19: 
20: namespace Flux {
21: namespace resource_model {
22: 
23: /*! Variation-aware policy: allocate resources based on
24:  * similar performance class.
25:  */
26: struct var_aware_t : public dfu_match_cb_t {
27:     var_aware_t ();
28:     var_aware_t (const std::string &name);
29:     var_aware_t (const var_aware_t &o);
30:     var_aware_t &operator= (const var_aware_t &o);
31:     ~var_aware_t ();
32: 
33:     int dom_finish_graph (subsystem_t subsystem,
34:                           const std::vector<Flux::Jobspec::Resource> &resources,
35:                           const resource_graph_t &g,
36:                           scoring_api_t &dfu);
37:     int dom_finish_vtx (vtx_t u,
38:                         subsystem_t subsystem,
39:                         const std::vector<Flux::Jobspec::Resource> &resources,
40:                         const resource_graph_t &g,
41:                         scoring_api_t &dfu);
42: 
43:     int dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu);
44: };
45: 
46: }  // namespace resource_model
47: }  // namespace Flux
48: 
49: #endif  // DFU_MATCH_VAR_AWARE_HPP
50: 
51: /*
52:  * vi:tabstop=4 shiftwidth=4 expandtab
53:  */

(End of file - total 53 lines)
</content>
```

---

## Assistant (Plan · alias-code · 7.3s)

_Thinking:_

Alright, now let's read the implementation of the multilevel ID (the core of the high/low policy), var_aware.cpp, and the matcher base class. I'll also take a look at the documentation about how these policies are documented and how they're used.




Let me read the multilevel ID implementation (the core of high/low policies) and the var_aware implementation.





**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_multilevel_id.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_multilevel_id.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2021 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef DFU_MATCH_MULTILEVEL_ID_HPP
12: #define DFU_MATCH_MULTILEVEL_ID_HPP
13: 
14: #include <vector>
15: #include <unordered_map>
16: #include "resource/policies/base/dfu_match_cb.hpp"
17: 
18: namespace Flux {
19: namespace resource_model {
20: 
21: /*! MultiLevel ID-based match policy: select each
22:  *  resource using a user-defined function of numeric IDs
23:  *  of their containing high-level resources and of itself.
24:  *  Templated on a binary functor in the fold namespace
25:  *  (e.g., fold::less, fold::greater etc).
26:  *  This policy can be used to incorporate one or more
27:  *  containing (or ancestor) resources into each contained
28:  *  resource.
29:  */
30: template<typename FOLD>
31: class multilevel_id_t : public dfu_match_cb_t {
32:    public:
33:     multilevel_id_t ();
34:     multilevel_id_t (const std::string &name);
35:     multilevel_id_t (const multilevel_id_t &o);
36:     multilevel_id_t &operator= (const multilevel_id_t &o);
37:     ~multilevel_id_t ();
38: 
39:     /*! Please see its overriding method within
40:      *  dfu_match_cb_t@base/dfu_match_cb.hpp
41:      */
42:     int dom_finish_graph (subsystem_t subsystem,
43:                           const std::vector<Flux::Jobspec::Resource> &resources,
44:                           const resource_graph_t &g,
45:                           scoring_api_t &dfu) override;
46: 
47:     /*! Please see its overriding method within
48:      *  dfu_match_cb_t@base/dfu_match_cb.hpp
49:      */
50:     int dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu) override;
51: 
52:     /*! Please see its overriding method within
53:      *  dfu_match_cb_t@base/dfu_match_cb.hpp
54:      */
55:     int dom_discover_vtx (vtx_t u,
56:                           subsystem_t subsystem,
57:                           const std::vector<Flux::Jobspec::Resource> &resources,
58:                           const resource_graph_t &g) override;
59: 
60:     /*! Please see its overriding method within
61:      *  dfu_match_cb_t@base/dfu_match_cb.hpp
62:      */
63:     int dom_finish_vtx (vtx_t u,
64:                         subsystem_t subsystem,
65:                         const std::vector<Flux::Jobspec::Resource> &resources,
66:                         const resource_graph_t &g,
67:                         scoring_api_t &dfu) override;
68: 
69:     /*! Please see its overriding method within
70:      *  dfu_match_cb_t@base/dfu_match_cb.hpp
71:      */
72:     int set_stop_on_k_matches (unsigned int k) override;
73: 
74:     /*! Please see its overriding method within
75:      *  dfu_match_cb_t@base/dfu_match_cb.hpp
76:      */
77:     int get_stop_on_k_matches () const override;
78: 
79:     /*!
80:      * Add a high-level resource type to the multilevel factor
81:      * vector. The preorder visit callback (dom_discover_vtx()) then
82:      * calculates the factor of the visiting resource vertex
83:      * of this type and adds that to multilevel score vector:
84:      * (the numeric ID of the visiting resource
85:      * of the added type + add_by) * multiply_by.
86:      * This method may be called multiple times to add multiple
87:      * high-level resource types to the score factors vector.
88:      *
89:      *  \param type      high-level resource type to add to
90:      *                   the multilevel factors.
91:      *  \param add_by    unsigned integer to add to the ID of each
92:      *                   resource of the added type.
93:      *  \param multiply_by
94:      *                   unsigned integer to multiply with (ID + add_by)
95:      *
96:      *  \return          return 0 on success; -1 on error with errno set:
97:      *                       EEXIST: type already has been added;
98:      *                       ENOMEM: out of memory.
99:      */
100:     int add_score_factor (const resource_type_t type, unsigned add_by, unsigned multiply_by);
101: 
102:    private:
103:     class score_factor_t {
104:        public:
105:         score_factor_t () = default;
106:         score_factor_t (resource_type_t type, unsigned int add_by, unsigned int multiply_by);
107:         score_factor_t (const score_factor_t &o) = default;
108:         int64_t calc_factor (int64_t base_factor, int64_t break_tie);
109:         int64_t m_factor = 0;
110: 
111:        private:
112:         resource_type_t m_type;
113:         unsigned int m_add_by = 0;
114:         unsigned int m_multiply_by = 1;
115:     };
116: 
117:     void set_base_factor (resource_type_t type, unsigned int id);
118: 
119:     FOLD m_comp;
120:     unsigned m_stop_on_k_matches = 0;
121:     int64_t m_multilevel_scores = 0;
122:     std::unordered_map<resource_type_t, score_factor_t> m_multilevel_factors;
123: };
124: 
125: }  // namespace resource_model
126: }  // namespace Flux
127: 
128: #endif  // DFU_MATCH_MULTILEVEL_ID_HPP
129: 
130: /*
131:  * vi:tabstop=4 shiftwidth=4 expandtab
132:  */

(End of file - total 132 lines)
</content>
```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_multilevel_id_impl.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_multilevel_id_impl.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2021 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef DFU_MATCH_MULTILEVEL_ID_IMPL_HPP
12: #define DFU_MATCH_MULTILEVEL_ID_IMPL_HPP
13: 
14: #include <numeric>
15: #include "resource/policies/dfu_match_multilevel_id.hpp"
16: 
17: namespace Flux {
18: namespace resource_model {
19: 
20: ////////////////////////////////////////////////////////////////////////////////
21: // MultiLevel ID Match Policy Class's Private Method Definitions
22: ////////////////////////////////////////////////////////////////////////////////
23: 
24: template<typename FOLD>
25: multilevel_id_t<FOLD>::score_factor_t::score_factor_t (resource_type_t type,
26:                                                        unsigned add_by,
27:                                                        unsigned multiple_by)
28:     : m_type (type), m_add_by (add_by), m_multiply_by (multiple_by)
29: {
30: }
31: 
32: template<typename FOLD>
33: int64_t multilevel_id_t<FOLD>::score_factor_t::calc_factor (int64_t base_factor, int64_t break_tie)
34: {
35:     int64_t add, mul, tie;
36:     if (base_factor < 0 || break_tie < 0) {
37:         errno = EINVAL;
38:         return -1;
39:     }
40: 
41:     if (base_factor > (std::numeric_limits<int64_t>::max () - m_add_by)) {
42:         errno = EOVERFLOW;
43:         return -1;
44:     }
45:     add = base_factor + m_add_by;
46: 
47:     if (add > (std::numeric_limits<int64_t>::max () / m_multiply_by)) {
48:         errno = EOVERFLOW;
49:         return -1;
50:     }
51:     mul = add * m_multiply_by;
52:     tie = std::abs (break_tie % static_cast<int64_t> (m_multiply_by) - 1);
53: 
54:     if (mul > (std::numeric_limits<int64_t>::max () - tie)) {
55:         errno = EOVERFLOW;
56:         return -1;
57:     }
58:     m_factor = mul + tie;
59:     return m_factor;
60: }
61: 
62: ////////////////////////////////////////////////////////////////////////////////
63: // MultiLevel ID Match Policy Class's Public Method Definitions
64: ////////////////////////////////////////////////////////////////////////////////
65: 
66: template<typename FOLD>
67: multilevel_id_t<FOLD>::multilevel_id_t ()
68: {
69: }
70: 
71: template<typename FOLD>
72: multilevel_id_t<FOLD>::multilevel_id_t (const std::string &name) : dfu_match_cb_t (name)
73: {
74: }
75: 
76: template<typename FOLD>
77: multilevel_id_t<FOLD>::multilevel_id_t (const multilevel_id_t &o) : dfu_match_cb_t (o)
78: {
79:     m_stop_on_k_matches = o.m_stop_on_k_matches;
80:     m_multilevel_scores = o.m_multilevel_scores;
81:     m_multilevel_factors = o.m_multilevel_factors;
82: }
83: 
84: template<typename FOLD>
85: multilevel_id_t<FOLD> &multilevel_id_t<FOLD>::operator= (const multilevel_id_t &o)
86: {
87:     dfu_match_cb_t::operator= (o);
88:     m_stop_on_k_matches = o.m_stop_on_k_matches;
89:     m_multilevel_scores = o.m_multilevel_scores;
90:     m_multilevel_factors = o.m_multilevel_factors;
91:     return *this;
92: }
93: 
94: template<typename FOLD>
95: multilevel_id_t<FOLD>::~multilevel_id_t ()
96: {
97: }
98: 
99: template<typename FOLD>
100: int multilevel_id_t<FOLD>::dom_finish_graph (subsystem_t subsystem,
101:                                              const std::vector<Flux::Jobspec::Resource> &resources,
102:                                              const resource_graph_t &g,
103:                                              scoring_api_t &dfu)
104: {
105:     int64_t score = MATCH_MET;
106:     for (auto &resource : resources) {
107:         unsigned qc = dfu.qualified_count (subsystem, resource.type);
108:         unsigned count = calc_count (resource, qc);
109:         if (count == 0) {
110:             score = MATCH_UNMET;
111:             break;
112:         }
113:         dfu.choose_accum_best_k (subsystem, resource.type, count, m_comp);
114:     }
115:     dfu.set_overall_score (score);
116:     m_multilevel_scores = 0;
117:     return (score == MATCH_MET) ? 0 : -1;
118: }
119: 
120: template<typename FOLD>
121: int multilevel_id_t<FOLD>::dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu)
122: {
123:     std::vector<resource_type_t> types;
124:     dfu.resrc_types (subsystem, types);
125:     for (auto &type : types)
126:         dfu.choose_accum_all (subsystem, type, m_comp);
127:     return 0;
128: }
129: 
130: template<typename FOLD>
131: int multilevel_id_t<FOLD>::dom_discover_vtx (vtx_t u,
132:                                              subsystem_t subsystem,
133:                                              const std::vector<Flux::Jobspec::Resource> &resources,
134:                                              const resource_graph_t &g)
135: {
136:     if (m_multilevel_factors.find (g[u].type) != m_multilevel_factors.end ()) {
137:         if (g[u].id < -1)
138:             return -1;
139:         auto &f = m_multilevel_factors[g[u].type];
140:         int64_t factor = f.calc_factor (g[u].id + 1, g[u].uniq_id);
141:         if (factor < 0)
142:             return factor;
143:         m_multilevel_scores += factor;
144:     }
145:     incr ();
146:     return 0;
147: }
148: 
149: template<typename FOLD>
150: int multilevel_id_t<FOLD>::dom_finish_vtx (vtx_t u,
151:                                            subsystem_t subsystem,
152:                                            const std::vector<Flux::Jobspec::Resource> &resources,
153:                                            const resource_graph_t &g,
154:                                            scoring_api_t &dfu)
155: {
156:     int64_t score = MATCH_MET;
157:     int64_t overall;
158: 
159:     for (auto &resource : resources) {
160:         if (resource_type_t{resource.type} != g[u].type)
161:             continue;
162:         // Jobspec resource type matches with the visiting vertex
163:         for (auto &c_resource : resource.with) {
164:             // Test children resource count requirements
165:             unsigned qc = dfu.qualified_count (subsystem, c_resource.type);
166:             unsigned count = calc_count (c_resource, qc);
167:             if (count == 0) {
168:                 score = MATCH_UNMET;
169:                 break;
170:             }
171:             dfu.choose_accum_best_k (subsystem, c_resource.type, count, m_comp);
172:         }
173:     }
174: 
175:     auto factor = m_multilevel_factors.find (g[u].type);
176:     if (factor != m_multilevel_factors.end ())
177:         m_multilevel_scores -= factor->second.m_factor;
178: 
179:     overall = (score == MATCH_MET) ? (score + m_multilevel_scores + g[u].id + 1) : score;
180:     dfu.set_overall_score (overall);
181:     decr ();
182:     if (score != MATCH_MET) {
183:         errno = EBUSY;
184:         return -1;
185:     }
186:     return 0;
187: }
188: 
189: template<typename FOLD>
190: int multilevel_id_t<FOLD>::set_stop_on_k_matches (unsigned k)
191: {
192:     if (k > 1) {
193:         errno = EINVAL;
194:         return -1;
195:     }
196:     m_stop_on_k_matches = k;
197:     return 0;
198: }
199: 
200: template<typename FOLD>
201: int multilevel_id_t<FOLD>::get_stop_on_k_matches () const
202: {
203:     return m_stop_on_k_matches;
204: }
205: 
206: template<typename FOLD>
207: int multilevel_id_t<FOLD>::add_score_factor (resource_type_t type,
208:                                              unsigned add_by,
209:                                              unsigned multiple_by)
210: {
211:     try {
212:         if (m_multilevel_factors.find (type) != m_multilevel_factors.end ()) {
213:             errno = EEXIST;
214:             return -1;
215:         }
216:         auto ret = m_multilevel_factors.insert ({type, score_factor_t{type, add_by, multiple_by}});
217:         if (!ret.second) {
218:             errno = ENOMEM;
219:             return -1;
220:         }
221:         return 0;
222:     } catch (std::bad_alloc &e) {
223:         errno = ENOMEM;
224:         return -1;
225:     }
226: }
227: 
228: }  // namespace resource_model
229: }  // namespace Flux
230: 
231: #endif  // DFU_MATCH_MULTILEVEL_ID_IMPL_HPP
232: 
233: /*
234:  * vi:tabstop=4 shiftwidth=4 expandtab
235:  */

(End of file - total 235 lines)
</content>
```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/dfu_match_var_aware.cpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/dfu_match_var_aware.cpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2019 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: extern "C" {
12: #if HAVE_CONFIG_H
13: #include <config.h>
14: #endif
15: }
16: 
17: #include "resource/policies/dfu_match_var_aware.hpp"
18: 
19: namespace Flux {
20: namespace resource_model {
21: 
22: var_aware_t::var_aware_t ()
23: {
24: }
25: 
26: var_aware_t::var_aware_t (const std::string &name) : dfu_match_cb_t (name)
27: {
28: }
29: 
30: var_aware_t::var_aware_t (const var_aware_t &o) : dfu_match_cb_t (o)
31: {
32: }
33: 
34: var_aware_t &var_aware_t::operator= (const var_aware_t &o)
35: {
36:     dfu_match_cb_t::operator= (o);
37:     return *this;
38: }
39: 
40: var_aware_t::~var_aware_t ()
41: {
42: }
43: 
44: int var_aware_t::dom_finish_graph (subsystem_t subsystem,
45:                                    const std::vector<Flux::Jobspec::Resource> &resources,
46:                                    const resource_graph_t &g,
47:                                    scoring_api_t &dfu)
48: {
49:     int score = MATCH_MET;
50:     fold::less comp;
51: 
52:     for (auto &resource : resources) {
53:         unsigned int qc = dfu.qualified_count (subsystem, resource.type);
54:         unsigned int count = calc_count (resource, qc);
55:         if (count == 0) {
56:             score = MATCH_UNMET;
57:             break;
58:         }
59:         dfu.choose_accum_best_k (subsystem, resource.type, count, comp);
60:     }
61:     dfu.set_overall_score (score);
62:     if (score != MATCH_MET) {
63:         errno = EBUSY;
64:         return -1;
65:     }
66:     return 0;
67: }
68: 
69: int var_aware_t::dom_finish_slot (subsystem_t subsystem, scoring_api_t &dfu)
70: {
71:     std::vector<resource_type_t> types;
72:     dfu.resrc_types (subsystem, types);
73:     for (auto &type : types)
74:         dfu.choose_accum_all (subsystem, type);
75:     return 0;
76: }
77: 
78: int var_aware_t::dom_finish_vtx (vtx_t u,
79:                                  subsystem_t subsystem,
80:                                  const std::vector<Flux::Jobspec::Resource> &resources,
81:                                  const resource_graph_t &g,
82:                                  scoring_api_t &dfu)
83: {
84:     int64_t score = MATCH_MET;
85:     int64_t overall;
86:     fold::less comp;
87: 
88:     /* Default value for worst-performing-class assumed as 9999. */
89:     int64_t perf_class = 9999;
90: 
91:     for (auto &resource : resources) {
92:         if (resource.type != g[u].type)
93:             continue;
94: 
95:         // jobspec resource type matches with the visiting vertex
96:         for (auto &c_resource : resource.with) {
97:             // test children resource count requirements
98:             unsigned int qc = dfu.qualified_count (subsystem, c_resource.type);
99:             unsigned int count = calc_count (c_resource, qc);
100:             if (count == 0) {
101:                 score = MATCH_UNMET;
102:                 break;
103:             }
104:             dfu.choose_accum_best_k (subsystem, c_resource.type, count, comp);
105:         }
106:     }
107: 
108:     if (score == MATCH_MET) {
109:         try {
110:             perf_class = std::stoi (g[u].properties.at ("perf_class"));
111:         } catch (const std::out_of_range &oor) {
112:             perf_class = 9999;
113:         } catch (const std::invalid_argument &ia) {
114:             perf_class = 9999;
115:         }
116:         /* Ensure we don't have negative or more than
117:          * 9999 performance classes so we have clear boundaries. */
118:         if (perf_class < 0 || perf_class > 9999) {
119:             perf_class = 9999;
120:         }
121:     }
122: 
123:     overall = (score == MATCH_MET) ? (score + perf_class) : score;
124:     dfu.set_overall_score (overall);
125:     decr ();
126:     if (score != MATCH_MET) {
127:         errno = EBUSY;
128:         return -1;
129:     }
130:     return 0;
131: }
132: 
133: }  // namespace resource_model
134: }  // namespace Flux
135: 
136: /*
137:  * vi:tabstop=4 shiftwidth=4 expandtab
138:  */

(End of file - total 138 lines)
</content>
```

---

## Assistant (Plan · alias-code · 7.8s)

_Thinking:_

Now I have a good understanding of the policy. Let's also check the following:
1. The matcher base class (to understand `matcher_data_t`, `add_exclusive_resource_type`, and `MATCH_MET`)
2. The scoring API / fold comparison functions (`fold::greater`, `fold::less`, `fold::interval_greater`)
3. The documentation `doc/man5/flux-config-sched-fluxion-resource.rst`
4. The place where `create_match_cb` is called (the module, probably resource/modules/... or the reapi module)

Let's take a look at matcher.hpp, the fold definitions, and the documentation.




Let me look at the supporting infrastructure: the matcher base, fold comparators, and the documentation.





**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/policies/base/matcher.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/policies/base/matcher.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef MATCHER_HPP
12: #define MATCHER_HPP
13: 
14: #include <string>
15: #include <iostream>
16: #include <vector>
17: #include <set>
18: #include <map>
19: #include "resource/libjobspec/jobspec.hpp"
20: #include "resource/schema/data_std.hpp"
21: #include "resource/planner/c/planner.h"
22: #include "resource/policies/base/match_op.h"
23: 
24: namespace Flux {
25: namespace resource_model {
26: 
27: enum match_score_t { MATCH_UNMET = 0, MATCH_MET = 1 };
28: 
29: /*! Base matcher data class.
30:  *  Provide idioms to specify the target subsystems and
31:  *  resource relationship types which then allow for filtering the graph
32:  *  data store for the match callback object.
33:  */
34: class matcher_data_t {
35:    public:
36:     matcher_data_t ();
37:     matcher_data_t (const std::string &name);
38:     matcher_data_t (const matcher_data_t &o);
39:     matcher_data_t &operator= (const matcher_data_t &o);
40:     ~matcher_data_t ();
41: 
42:     /*! Add a subsystem and the relationship type that this resource base
43:      *  matcher will use. Vertices and edges of the resource graph are
44:      *  filtered based on this information. Each vertex and edge that
45:      *  is a part of this subsystem and relationship type will be selected.
46:      *
47:      *  This method must be called at least once to set the dominant
48:      *  subsystem to use. This method can be called multiple times with
49:      *  a distinct subsystem, each additional subsystem becomes an auxiliary
50:      *  subsystem.
51:      *
52:      *  \param subsystem subsystem to select
53:      *  \param tf        edge (or relation type) to select.
54:      *                   pass * to select all types
55:      *  \return          0 on success; -1 on error
56:      */
57:     int add_subsystem (subsystem_t s, const std::string tf = "*");
58: 
59:     const std::string &matcher_name () const;
60:     void set_matcher_name (const std::string &name);
61:     const std::vector<subsystem_t> &subsystems () const;
62: 
63:     /*
64:      * \return           return the dominant subsystem this matcher has
65:      *                   selected to use.
66:      */
67:     subsystem_t dom_subsystem () const;
68: 
69:     /*
70:      * \return           return the subsystem selector to be used for
71:      *                   graph filtering.
72:      */
73:     const multi_subsystemsS &subsystemsS () const;
74: 
75:    private:
76:     std::string m_name;
77:     subsystem_t m_err_subsystem{"error"};
78:     std::vector<subsystem_t> m_subsystems;
79:     multi_subsystemsS m_subsystems_map;
80: };
81: 
82: /*! Base utility method for matchers.
83:  */
84: class matcher_util_api_t {
85:    public:
86:     /*! Calculate the count that should be allocated, which is a function
87:      *  of the number of qualified available resources, minimum/maximum/operator
88:      *  requirement of the jobspec.
89:      *
90:      *  \param resource  resource section of the jobspec.
91:      *  \param qual_cnt  available qualified resources.
92:      *  \return          0 when not available; count otherwise.
93:      */
94:     unsigned int calc_count (const Flux::Jobspec::Resource &resource, unsigned int qual_cnt) const;
95: 
96:     /*! Calculate the effective max count that should be allocated.
97:      *
98:      *  \param resource  resource section of the jobspec.
99:      *  \return          Effective max count; 0 if an error is encountered.
100:      */
101:     unsigned int calc_effective_max (const Flux::Jobspec::Resource &resource) const;
102: 
103:     /*! Set prune filters based on spec. The spec should comply with
104:      *  the following format:
105:      *  <HL-resource1:LL-resource1[,HL-resource2:LL-resource2...]...]>
106:      *      Install a planner-based filter at each High-Level (HL) resource
107:      *      vertex which tracks the state of the Low-Level (LL) resources
108:      *      in aggregate, residing under its subtree. If a jobspec requests
109:      *      1 node with 4 cores, and the visiting compute-node vertex has
110:      *      only a total of 2 available cores in aggregate at its
111:      *      subtree, this filter allows the traverser to prune a further descent
112:      *      to accelerate the search.
113:      *      Use the ALL keyword for HL-resource if you want LL-resource to be
114:      *      tracked at all of the HL-resource vertices. Examples:
115:      *      rack:node,node:core
116:      *      ALL:core,cluster:node,rack:node
117:      *
118:      *  \param subsystem subsystem
119:      *  \param spec      prune filter specification string
120:      */
121:     int set_pruning_types_w_spec (subsystem_t subsystem, const std::string &spec);
122: 
123:     void set_pruning_type (subsystem_t subsystem,
124:                            resource_type_t anchor_type,
125:                            resource_type_t prune_type);
126: 
127:     bool is_my_pruning_type (subsystem_t subsystem,
128:                              resource_type_t anchor_type,
129:                              resource_type_t prune_type);
130: 
131:     bool is_pruning_type (subsystem_t subsystem, resource_type_t prune_type);
132: 
133:     bool get_my_pruning_types (subsystem_t subsystem,
134:                                resource_type_t anchor_type,
135:                                std::vector<resource_type_t> &out_prune_types);
136: 
137:     int add_exclusive_resource_type (resource_type_t type);
138: 
139:     bool is_resource_type_exclusive (resource_type_t type);
140: 
141:     const std::set<resource_type_t> &get_exclusive_resource_types () const;
142: 
143:     int reset_exclusive_resource_types (const std::set<resource_type_t> &x_types);
144: 
145:    private:
146:     int register_resource_pair (subsystem_t subsystem, std::string &r_pair);
147: 
148:     std::set<resource_type_t> m_x_resource_types;
149: 
150:     // resource types that will be used for scheduler driven aggregate updates
151:     // Examples:
152:     // m_pruning_type["containment"]["rack"] -> {"node"}
153:     //     in the containment subsystem at the rack level, please
154:     //     maintain an aggregate on the available nodes under it.
155:     // m_pruing_type["containment"][ANY_RESOURCE_TYPE] -> {"core"}
156:     //     in the containment subsystem at any level, please
157:     //     maintain an aggregate on the available cores under it.
158:     std::map<subsystem_t, std::map<resource_type_t, std::set<resource_type_t>>> m_pruning_types;
159:     std::map<subsystem_t, std::set<resource_type_t>> m_total_set;
160: };
161: 
162: }  // namespace resource_model
163: }  // namespace Flux
164: 
165: #endif  // MATCHER_DATA_HPP
166: 
167: /*
168:  * vi:tabstop=4 shiftwidth=4 expandtab
169:  */

(End of file - total 169 lines)
</content>
```

**Tool: grep**

**Input:**
```json
{
  "pattern": "interval_greater|struct greater|struct less",
  "include": "*.hpp"
}
```

**Output:**
```
Found 4 matches
/workspaces/flux-sched/resource/policies/dfu_match_locality.hpp:
  Line 28: struct greater_interval_first_t : public dfu_match_cb_t {


/workspaces/flux-sched/resource/evaluators/fold.hpp:
  Line 22: struct greater {

  Line 29: struct less {

  Line 36: struct interval_greater {

```

**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/doc/man5/flux-config-sched-fluxion-resource.rst"
}
```

**Output:**
```
<path>/workspaces/flux-sched/doc/man5/flux-config-sched-fluxion-resource.rst</path>
<type>file</type>
<content>
1: =====================================
2: flux-config-sched-fluxion-resource(5)
3: =====================================
4: 
5: DESCRIPTION
6: ===========
7: 
8: The ``sched-fluxion-resource`` configuration table may be used
9: to tune the resource match policies and parameters
10: for the Fluxion graph-based scheduler.
11: 
12: This table may contain the following keys:
13: 
14: KEYS
15: ====
16: 
17: match-policy
18:     (optional) String name of match policy to use. The supported
19:     match polices are described in the :ref:`match_policies` section.
20:     The default is "first".
21: 
22: match-format
23:     (optional) String name of match format to use.
24:     "rv1", "rv1_shorthand", and "rv1_nosched" are currently supported.
25:     When a job is allocated, its resource set is encoded
26:     in RFC 20 Resource Set Specification Version 1.
27:     It has an optional ``scheduling`` key and this is
28:     only encoded by "rv1" and "rv1_shorthand".
29:     By omitting the ``scheduling`` key, "rv1_nosched" will
30:     result in higher scheduling performance. However, "rv1_nosched"
31:     is limited to describing only nodes, cores, and GPUs, while
32:     "rv1" and "rv1_shorthand" can describe arbitrary resource types.
33:     The default is "rv1_nosched".
34: 
35: load-allowlist
36:     (optional) Comma-separated list of resource types to load
37:     with the ``hwloc`` reader.
38:     When Flux is instantiated in single-user mode
39:     with a foreign workload manager (e.g., IBM LSF, SLURM, etc),
40:     ``sched-fluxion-resource`` can discover the target resources
41:     by using ``hwloc``. This list allows ``sched-fluxion-resource``
42:     to load only the resources of the specified types
43:     from our ``hwloc`` reader as needed for scheduling.
44: 
45: reserve-vtx-vec
46:     (optional) Integer value that reserves memory to store
47:     the specified number of graph vertices in order
48:     to optimize resource-graph loading performance.
49:     Recommended for handling large-scale systems.
50:     The value must be a non-zero integer up to 2000000.
51: 
52: prune-filters
53:     (optional) Comma-separated list of graph-search filters
54:     to accelerate match operations. Each filter is
55:     expressed such that a High-Level (HL) resource
56:     vertex can track the aggregate state of the Low-Level (LL) resources
57:     residing under its subtree graph.
58:     If a jobspec requests 1 compute node with 4 cores, and the visiting
59:     compute-node vertex has only a total of 2 available cores
60:     in aggregate at its subtree, this filter allows the traverser
61:     to prune a further descent to accelerate the search.
62:     The format must conform to
63:     ``<HL-resource1:LL-resource1[,HL-resource2:LL-resource2...]...]>``.
64:     Use the ``ALL`` keyword for HL-resource if you want LL-resource
65:     to be tracked at all of its ancestor HL-resource vertices.
66:     The default is "ALL:core,ALL:node".
67: 
68: 
69: .. _match_policies:
70: 
71: RESOURCE MATCH POLICIES
72: =======================
73: 
74: low
75:     Select resources with low ID first (e.g., core0 is selected
76:     first before core1 is selected).
77: 
78: high
79:     Select resources with high ID first (e.g., core15 is selected
80:     first before core14).
81: 
82: lonode
83:     Select resources with lowest compute-node ID first; otherwise
84:     the ``low`` policy (e.g., for node-local resource types).
85: 
86: hinode
87:     Select resources with highest compute-node ID first; otherwise
88:     the ``high`` policy (e.g., for node-local resource types).
89: 
90: lonodex
91:     A node-exclusive scheduling whose behavior is
92:     identical to ``lonode`` except each compute node
93:     is exclusively allocated.
94: 
95: hinodex
96:     A node-exclusive scheduling whose behavior is
97:     identical to ``hinode`` except each compute node
98:     is exclusively allocated.
99: 
100: first
101:     Select the first matching resources and stop the search
102: 
103: firstnodex
104:     A node-exclusive scheduling whose behavior is identical to
105:     ``first`` except each compute node is exclusively allocated.
106: 
107: 
108: CUSTOM MATCH POLICIES
109: =====================
110: Match policies are initialized as collections of individual attributes
111: that help the scheduler to select matches. For convenience, these 
112: attributes are exposed to users such that they can write custom policies.
113: Below is a list of match attributes which can be selected by users.
114: 
115: policy
116:     Allowed options are ``low`` or ``high``. If only ``policy=low``
117:     or ``policy=high`` is specified, the behavior of the match policy is the
118:     same as if ``match-policy=low`` or ``match-policy=high`` were selected,
119:     respectively.
120: 
121: node_centric
122:     ``true`` or ``false`` are allowed options. Evaluate matches based on the
123:     ID of the compute node first. 
124: 
125: node_exclusive
126:     ``true`` or ``false`` are allowed options. Exclusively allocate compute
127:     nodes when a match is found.
128: 
129: set_stop_on_1_matches
130:     ``true`` or ``false`` are allowed options. When a match is found, take
131:     it, without evaluating for potentially more optimal matches.
132: 
133: ::
134: 
135:     [sched-fluxion-resource]
136: 
137:     # system instance will use node-exclusive
138:     # scheduling first-match (with nodes of high node IDs
139:     # selected first).
140:     match-policy = "policy=high node_exclusive=true set_stop_on_1_matches=true"
141: 
142: 
143: EXAMPLE
144: =======
145: 
146: ::
147: 
148:     [sched-fluxion-resource]
149: 
150:     # system instance will use node-exclusive
151:     # scheduling (with nodes of low node IDs
152:     # selected first).
153:     match-policy = "lonodex"
154: 
155:     # system-instance will use full-up rv1 writer
156:     # so that R will contain scheduling key needed
157:     # for failure recovery.
158:     match-format = "rv1"
159: 
160: 
161: RESOURCES
162: =========
163: 
164: Flux: http://flux-framework.org
165: 
166: RFC 20: Resource Set Specification Version 1: https://flux-framework.rtfd.io/projects/flux-rfc/en/latest/spec_20.html
167: 
168: SEE ALSO
169: ========
170: 
171: :core:man5:`flux-config`
172: 

(End of file - total 172 lines)
</content>
```

---

## Assistant (Plan · alias-code · 6.2s)

_Thinking:_

Next, let's look at fold.hpp to understand the comparison functions (comparators), and check where create_match_cb is used (probably within the resource module). Also, let's take a look at how node_exclusive and stop_on_k function in the traverser.




Let me check the fold comparators and where the factory is consumed by the scheduler module.




**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/evaluators/fold.hpp"
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/evaluators/fold.hpp</path>
<type>file</type>
<content>
1: /*****************************************************************************\
2:  * Copyright 2014 Lawrence Livermore National Security, LLC
3:  * (c.f. AUTHORS, NOTICE.LLNS, LICENSE)
4:  *
5:  * This file is part of the Flux resource manager framework.
6:  * For details, see https://github.com/flux-framework.
7:  *
8:  * SPDX-License-Identifier: LGPL-3.0
9: \*****************************************************************************/
10: 
11: #ifndef FOLD_HPP
12: #define FOLD_HPP
13: 
14: #include <boost/icl/interval.hpp>
15: #include <boost/icl/interval_set.hpp>
16: #include "resource/evaluators/edge_eval_api.hpp"
17: 
18: namespace Flux {
19: namespace resource_model {
20: 
21: namespace fold {
22: struct greater {
23:     inline bool operator() (const eval_egroup_t &a, const eval_egroup_t &b) const
24:     {
25:         return a.score > b.score;
26:     }
27: };
28: 
29: struct less {
30:     inline bool operator() (const eval_egroup_t &a, const eval_egroup_t &b) const
31:     {
32:         return a.score < b.score;
33:     }
34: };
35: 
36: struct interval_greater {
37:     inline bool operator() (const eval_egroup_t &a, const eval_egroup_t &b) const
38:     {
39:         return *(ivset.find (a.score)) > *(ivset.find (b.score));
40:     }
41:     boost::icl::interval_set<int64_t> ivset;
42: };
43: 
44: struct interval_less {
45:     inline bool operator() (const eval_egroup_t &a, const eval_egroup_t &b) const
46:     {
47:         return *(ivset.find (a.score)) < *(ivset.find (b.score));
48:     }
49:     boost::icl::interval_set<int64_t> ivset;
50: };
51: 
52: struct plus {
53:     inline const int64_t operator() (const int64_t &result, const eval_egroup_t &a) const
54:     {
55:         return result + a.score;
56:     }
57: };
58: inline boost::icl::interval_set<int64_t>::interval_type to_interval (const eval_egroup_t &ev)
59: {
60:     using namespace boost::icl;
61:     int64_t tmp = ev.score;
62:     return interval_set<int64_t>::interval_type::closed (tmp, tmp);
63: }
64: }  // namespace fold
65: 
66: }  // namespace resource_model
67: }  // namespace Flux
68: 
69: #endif  // FOLD_HPP
70: 
71: /*
72:  * vi:tabstop=4 shiftwidth=4 expandtab
73:  */

(End of file - total 73 lines)
</content>
```

**Tool: grep**

**Input:**
```json
{
  "pattern": "create_match_cb|known_match_policy|match-policy",
  "path": "/workspaces/flux-sched/resource"
}
```

**Output:**
```
Found 18 matches
/workspaces/flux-sched/resource/utilities/resource-query.cpp:
  Line 48:     {"match-policy", required_argument, 0, 'P'},

  Line 131:     -P, --match-policy=<low|high|lonode|hinode|lonodex|hinodex|first|firstnodex|locality|variation>

  Line 523:             case 'P': /* --match-policy */


/workspaces/flux-sched/resource/utilities/README.md:
  Line 32: % resource-query -L conf/default -F pretty_simple --match-subsystems=CA --match-policy=high


/workspaces/flux-sched/resource/traversers/test/by_jobid_index_test.cpp:
  Line 86:     auto match = create_match_cb ("first");

  Line 172:     auto match = create_match_cb ("first");

  Line 206:     auto match = create_match_cb ("first");


/workspaces/flux-sched/resource/reapi/bindings/c++/reapi_cli_impl.hpp:
  Line 969:     if (!(rq->matcher = create_match_cb (rq->params.matcher_policy))) {

  Line 1053:     if (!(matcher = create_match_cb (params.matcher_policy))) {


/workspaces/flux-sched/resource/modules/resource_match_opts.cpp:
  Line 48:     {"match-policy", MATCH_POLICY},

  Line 131:     if (!known_match_policy (p, error_str))


/workspaces/flux-sched/resource/modules/resource.cpp:
  Line 1586:     rc += required_module_option (ctx, match_policy, "match-policy");

  Line 1606:     if (!(ctx->matcher = create_match_cb (*match_policy))) {


/workspaces/flux-sched/resource/modules/feasibility.cpp:
  Line 265:     if (!(ctx->matcher = create_match_cb ("first"))) {


/workspaces/flux-sched/resource/policies/dfu_match_policy_factory.hpp:
  Line 28: bool known_match_policy (const std::string &policy, std::string &error);

  Line 47: std::shared_ptr<dfu_match_cb_t> create_match_cb (const std::string &policy);


/workspaces/flux-sched/resource/policies/dfu_match_policy_factory.cpp:
  Line 117: bool known_match_policy (const std::string &policy, std::string &error_str)

  Line 136: std::shared_ptr<dfu_match_cb_t> create_match_cb (const std::string &policy_requested)

```

---

## Assistant (Plan · alias-code · 7.3s)

_Thinking:_

At this point, I have a good grasp of the overall picture. Let me quickly check how the traversal (traverser) uses `stop_on_k_matches` and `exclusive` — just a quick check of the traverser to explain how these knobs (configuration items) actually work. Let me take a quick look at the traverser code.




One more look at how the traverser uses the `stop_on_k` and exclusivity knobs to round out the picture.



**Tool: grep**

**Input:**
```json
{
  "pattern": "stop_on_k|is_resource_type_exclusive",
  "path": "/workspaces/flux-sched/resource/traversers"
}
```

**Output:**
```
Found 3 matches
/workspaces/flux-sched/resource/traversers/dfu_impl_update.cpp:
  Line 306:     return emit_shadow_from_parent || m_match->is_resource_type_exclusive ((*m_graph)[u].type);

  Line 364:                 if (m_match->get_stop_on_k_matches () > 0


/workspaces/flux-sched/resource/traversers/dfu_impl.cpp:
  Line 612:     return (!m_match->get_stop_on_k_matches ())

```

---

## Assistant (Plan · alias-code · 7.0s)

_Thinking:_

Now I have a comprehensive understanding of the resource matching policy. Let me also quickly check the traverser's context (around lines 360-370 and 605-620) to understand how stop_on_k affects the search. Actually, I already have enough info to explain. Let me quickly check those two snippets for accuracy.


**Tool: read**

**Input:**
```json
{
  "filePath": "/workspaces/flux-sched/resource/traversers/dfu_impl_update.cpp",
  "offset": 295,
  "limit": 80
}
```

**Output:**
```
<path>/workspaces/flux-sched/resource/traversers/dfu_impl_update.cpp</path>
<type>file</type>
<content>
295:                          bool full,
296:                          std::map<resource_type_t, int64_t> &to_parent)
297: {
298:     // NYI: update resources on the UPV direction
299:     return 0;
300: }
301: 
302: bool dfu_impl_t::modify_traversal (vtx_t u, bool emit_shadow_from_parent) const
303: {
304:     // We modify our traversal if the parent says so if the
305:     // visiting vertex resource type is exclusive by configuration
306:     return emit_shadow_from_parent || m_match->is_resource_type_exclusive ((*m_graph)[u].type);
307: }
308: 
309: bool dfu_impl_t::stop_explore_best (edg_t e, bool mod_trav) const
310: {
311:     return (*m_graph)[e].idata.get_sequence_number () != m_sequence_number && !mod_trav;
312: }
313: 
314: bool dfu_impl_t::get_eff_exclusive (bool x, bool mod_trav) const
315: {
316:     return x || mod_trav;
317: }
318: 
319: unsigned dfu_impl_t::get_eff_needs (unsigned needs, unsigned size, bool mod_trav) const
320: {
321:     return mod_trav ? size : needs;
322: }
323: 
324: int dfu_impl_t::upd_dfv (vtx_t u,
325:                          std::shared_ptr<match_writers_t> &writers,
326:                          unsigned int needs,
327:                          bool excl,
328:                          const jobmeta_t &jobmeta,
329:                          bool full,
330:                          std::map<resource_type_t, int64_t> &to_parent,
331:                          bool emit_shadow,
332:                          bool excl_parent)
333: {
334:     int n_plans = 0;
335:     std::map<resource_type_t, int64_t> dfu;
336:     subsystem_t dom = m_match->dom_subsystem ();
337:     f_out_edg_iterator_t ei, ei_end;
338:     bool mod = modify_traversal (u, emit_shadow);
339:     excl = excl || mod;
340:     m_trav_level++;
341:     (*m_graph)[u].idata.colors[dom] = m_color.gray ();
342:     for (auto &subsystem : m_match->subsystems ()) {
343:         for (tie (ei, ei_end) = out_edges (u, *m_graph); ei != ei_end; ++ei) {
344:             if (!in_subsystem (*ei, subsystem) || stop_explore (*ei, subsystem))
345:                 continue;
346: 
347:             if (stop_explore_best (*ei, mod))
348:                 continue;
349: 
350:             vtx_t tgt = target (*ei, *m_graph);
351:             int n_plan_sub = 0;
352:             bool x = get_eff_exclusive ((*m_graph)[*ei].idata.get_exclusive (), mod);
353:             unsigned needs =
354:                 get_eff_needs ((*m_graph)[*ei].idata.get_needs (), (*m_graph)[tgt].size, mod);
355: 
356:             if (subsystem == dom) {
357:                 // Value of `excl_parent` for child vertex is the value of `excl` for its parent
358:                 n_plan_sub += upd_dfv (tgt, writers, needs, x, jobmeta, full, dfu, mod, excl);
359:             } else {
360:                 n_plan_sub += upd_upv (tgt, writers, subsystem, needs, x, jobmeta, full, dfu);
361:             }
362: 
363:             if (n_plan_sub > 0) {
364:                 if (m_match->get_stop_on_k_matches () > 0
365:                     && upd_by_outedges (subsystem, jobmeta, u, *ei) < 0) {
366:                     m_err_msg += __FUNCTION__;
367:                     m_err_msg += ": upd_by_outedges returned -1.\n";
368:                 }
369:                 if (emit_edg (*ei, writers, excl) == -1) {
370:                     m_err_msg += __FUNCTION__;
371:                     m_err_msg += ": emit_edg returned -1.\n";
372:                 }
373:                 n_plans += n_plan_sub;
374:             }

(Showing lines 295-374 of 1317. Use offset=375 to continue.)
</content>
```

---

## Assistant (Plan · alias-code · 61.1s)

_Thinking:_

Now I have a complete understanding. Let me compose a comprehensive yet concise explanation of the resource matching policy in `resource/policies`.

Key points to explain:

1. **What it is**: Match policy = a strategy that determines *which* available resource instances to allocate to a job when multiple candidates satisfy the job's requirements. Implemented as a "DFU" (down-finish-up) graph traversal callback.

2. **Architecture**:
   - Base class `dfu_match_cb_t` (base/dfu_match_cb.hpp) — visitor callbacks invoked by the DFU traverser: `dom_discover_vtx` (preorder), `dom_finish_vtx` (postorder, where scores are assigned), `dom_finish_slot`, `dom_finish_graph`, plus auxiliary subsystem variants. Score semantics: `MATCH_MET` (1) means a qualified match; any score above MATCH_MET is eligible to become the selected match.
   - `matcher_data_t`/`matcher_util_api_t` (base/matcher.hpp) — subsystem selection, pruning filters, exclusive resource types, `calc_count`.
   - `scoring_api_t` ("dfu") — accumulates scores of candidate resources; `choose_accum_best_k` picks the k best by a comparator.
   - `fold` comparators (evaluators/fold.hpp) — `greater`, `less`, `interval_greater` (compares contiguous ID intervals — used for locality).
   - Factory: `dfu_match_policy_factory.cpp` — maps policy names to options, and builds the matcher.

3. **Named policies** (the `policies` map in the factory):
   - `low` = `policy=low` — picks the lowest ID first (e.g. core0 before core1). `low_first_t = multilevel_id_t<fold::less>`.
   - `high` = `policy=high` — highest ID first. `high_first_t = multilevel_id_t<fold::greater>`.
   - `lonode` = `policy=low node_centric=true` — low node ID takes priority for node-local resources.
   - `hinode` = `policy=high node_centric=true`.
   - `lonodex` = `policy=low node_centric=true node_exclusive=true` — node-exclusive variant.
   - `hinodex` = high + node-centric + exclusive.
   - `first` = `policy=high node_centric=true stop_on_1_matches=true` — takes the first match found and stops the search (highest ID node, then stop after one match).
   - `firstnodex` = same + node_exclusive.
   - `locality` = `greater_interval_first_t` — selects the resource set where IDs form the largest contiguous interval (improves locality/contiguity; e.g. 4 cores as core0-3 rather than scattered).
   - `variation` = `var_aware_t` — allocates based on the `perf_class` property of resources (similar performance class); lower perf_class number wins; missing/invalid perf_class → 9999 (worst).

4. **Building blocks (custom policies)**: `policy=low|high`, `node_centric=true` (adds a score factor for the node resource type: `(id+1)*10000` — so that node ID dominates over child resource IDs), `node_exclusive=true` (marks the node type as exclusive so the whole node is allocated), `stop_on_1_matches=true` (stops the traversal as soon as the first qualified match per resource type is found).

5. **How multilevel scoring works**: `multilevel_id_t<FOLD>` — in `dom_discover_vtx` (preorder), for each ancestor type registered via `add_score_factor(type, add_by, multiply_by)`, accumulates `(id + add_by) * multiply_by` (+ tiebreaker derived from uniq_id) into `m_multilevel_scores`; in `dom_finish_vtx` (postorder), overall score = MATCH_MET + accumulated multilevel score + own id + 1. This causes children of a low-ID node to score lower than children of a high-ID node (in the case of `greater`), and so on. `choose_accum_best_k` selects the requested number of instances according to the comparator.

6. **How locality works**: in `dom_finish_graph`, transforms the scores of qualified resources into intervals (a score is an ID, so a set of contiguous IDs becomes a merged interval), and `choose_accum_best_k` using `fold::interval_greater` picks the k with the "largest" interval → favors contiguous ID ranges.

7. **How var_aware works**: `dom_finish_vtx` reads the `perf_class` property (0-9999, default 9999) and sets overall = MATCH_MET + perf_class, then uses `fold::less` so that lower perf_class (better) wins.

8. **Configuration**: `sched-fluxion-resource`'s `match-policy` in the flux config (documented in doc/man5/flux-config-sched-fluxion-resource.rst). Defaults to "first". Also selectable via the `resource-query` utility's `-P`.

9. **Exclusivity mechanics**: `node_exclusive` registers node_rt as an exclusive type; the traverser's `modify_traversal` returns true for exclusive types → the whole subtree is treated as exclusive and all of its children are allocated (node_exclusive allocation).

10. **stop_on_k**: only k=0 or 1 is supported in multilevel_id_t (k>1 → EINVAL). When >0, the traverser, after planning a child, stops exploring more (via `upd_dfv` / `dfu_impl.cpp:612`), i.e. takes the first match.

Note the distinction from qmanager/policies (queuing policies) — since both directories exist, it's worth mentioning in one line that this is the resource-matching policy, not the queuing policy.

The user asked "explain the resource matching policy in resources/policies" — this is a request for an explanation, not a planning task for a change. Since plan mode is enabled, this is a read-only request, and I just need to explain. I should keep the response concise, but since this is an explanation task, some detail is appropriate. The instructions say to keep responses under 4 lines unless the user asks for detail — but the user is asking for an explanation of a code area, which inherently requires more detail. Still, I should be as concise as possible while being complete. I'll structure it with headers/bullets but keep it tight.

Alright, let me write the final answer.




## Resource Match Policies (`resource/policies`)

These decide **which** available resource instances a job gets when several candidates qualify. Each policy is a "DFU" (down-finish-up) graph-traversal callback: a traverser walks the resource graph and calls the policy's visitor methods, which score candidates via a `scoring_api_t`. Scores > `MATCH_MET` (base/matcher.hpp:27) are qualified matches; the policy's comparator picks the best.

### Architecture

- **Base class** `dfu_match_cb_t` (base/dfu_match_cb.hpp:32) — visitor hooks: `dom_discover_vtx` (preorder), `dom_finish_vtx` (postorder, where vertex scores are set), `dom_finish_slot`, `dom_finish_graph`, plus aux-subsystem variants and `set_stop_on_k_matches`.
- **Factory** `dfu_match_policy_factory.cpp` — maps policy names → options, parses custom policies, and builds the matcher via `create_match_cb()` (dfu_match_policy_factory.cpp:136).
- **Comparators** `fold` (resource/evaluators/fold.hpp) — `less`/`greater` (compare scores) and `interval_greater` (compares ID contiguity via boost interval sets).
- Consumed by the `sched-fluxion-resource` module (resource/modules/resource.cpp:1606) and `resource-query -P`.

### Named policies (dfu_match_policy_factory.cpp:23)

| Name | Expansion | Behavior |
|---|---|---|
| `low` | `policy=low` | Lowest IDs first (core0 before core1); `low_first_t` |
| `high` | `policy=high` | Highest IDs first; `high_first_t` |
| `lonode` | `policy=low node_centric=true` | Node ID dominates selection, low first |
| `hinode` | `policy=high node_centric=true` | Node ID dominates, high first |
| `lonodex` / `hinodex` | `*node node_exclusive=true` | Node-exclusive versions of lonode/hinode (whole node allocated) |
| `first` | `policy=high node_centric=true stop_on_1_matches=true` | Take first match, stop searching (the default) |
| `firstnodex` | `first` + `node_exclusive=true` | First match, node-exclusive |
| `locality` | — | `greater_interval_first_t` (dfu_match_locality.cpp) |
| `variation` | — | `var_aware_t` (dfu_match_var_aware.cpp) |

### Custom policies

Any combination of the four options (dfu_match_policy_factory.cpp:35):
- `policy=low|high` — base ID direction
- `node_centric=true` — adds a score factor `(node_id+1)*10000` for `node_rt`, so ancestor node ID outranks child resource IDs
- `node_exclusive=true` — registers `node_rt` as exclusive; the traverser (`modify_traversal`, traversers/dfu_impl_update.cpp:302) then allocates the node's entire subtree
- `stop_on_1_matches=true` — `set_stop_on_k_matches(1)`; traverser stops after the first qualified match per type (only k≤1 supported, dfu_match_multilevel_id_impl.hpp:190)

Example: `match-policy = "policy=high node_exclusive=true set_stop_on_1_matches=true"` in `[sched-fluxion-resource]`.

### How the three core implementations score

1. **`multilevel_id_t<FOLD>`** (dfu_match_multilevel_id_impl.hpp) — the engine behind low/high/*. On preorder visit it accumulates `(id+1)*multiply_by` for each registered ancestor factor into `m_multilevel_scores` (dfu_match_multilevel_id_impl.hpp:131); on postorder it sets overall score = `MATCH_MET + multilevel_scores + own_id + 1` (:179), then `choose_accum_best_k` with `fold::less`/`fold::greater` picks the requested count.
2. **`greater_interval_first_t`** ("locality") — in `dom_finish_graph` it transforms scores (which are IDs) into intervals and selects with `fold::interval_greater`, preferring the set with the largest *contiguous* ID run (e.g., cores 0–3 over scattered cores) (dfu_match_locality.cpp:45).
3. **`var_aware_t`** ("variation") — reads each vertex's `perf_class` property (0–9999; missing/bad → 9999 = worst) and scores `MATCH_MET + perf_class` with `fold::less`, so higher-performing (lower class number) resources are preferred first (dfu_match_var_aware.cpp:89).

Note: `qmanager/policies` is the separate *queuing* policy (backfill) subsystem — this directory is purely about instance selection during matching.

---

