/* Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PROXY_UTIL_H_
#define PROXY_UTIL_H_

/**
 * @file  proxy_util.h
 * @brief Internal interfaces private to mod_proxy.
 *
 * @defgroup MOD_PROXY_PRIVATE Private
 * @ingroup MOD_PROXY
 * @{
 */

/**
 * Register optional functions declared within proxy_util.c.
 */
void proxy_util_register_hooks(apr_pool_t *p);

/** @} */

#endif /* PROXY_UTIL_H_ */
