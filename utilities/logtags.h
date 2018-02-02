/* -*- Mode: C++; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
 *     Copyright 2018 Couchbase, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */
#pragma once
#include <memcached/visibility.h>
#include <string>
namespace cb {
/**
 * Wrap user/customer specific data with specific tags so that these data can
 * be scrubbed away during log collection.
 */
namespace logtags {
const std::string userdata = "ud";
MEMCACHED_PUBLIC_API std::string tagUserData(const std::string& data);
} // namespace logtags
} // namespace cb