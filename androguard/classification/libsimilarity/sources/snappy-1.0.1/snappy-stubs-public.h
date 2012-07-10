// Copyright 2011 Google Inc. All Rights Reserved.
// Author: sesse@google.com (Steinar H. Gunderson)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//      Unless required by applicable law or agreed to in writing, software
//      distributed under the License is distributed on an "AS IS" BASIS,
//      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//      See the License for the specific language governing permissions and
//      limitations under the License.
//
// Various type stubs for the open-source version of Snappy.
//
// This file cannot include config.h, as it is included from snappy.h,
// which is a public header. Instead, snappy-stubs-public.h is generated by
// from snappy-stubs-public.h.in at configure time.

#ifndef UTIL_SNAPPY_OPENSOURCE_SNAPPY_STUBS_PUBLIC_H_
#define UTIL_SNAPPY_OPENSOURCE_SNAPPY_STUBS_PUBLIC_H_

#if 1
#include <stdint.h>
#endif

#if 1
#include <stddef.h>
#endif

#define SNAPPY_MAJOR 1
#define SNAPPY_MINOR 0
#define SNAPPY_PATCHLEVEL 1
#define SNAPPY_VERSION \
    ((SNAPPY_MAJOR << 16) | (SNAPPY_MINOR << 8) | SNAPPY_PATCHLEVEL)

#include <string>

namespace snappy {

#if 1
typedef int8_t int8;
typedef uint8_t uint8;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef int64_t int64;
typedef uint64_t uint64;
#else
typedef signed char int8;
typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
#endif

typedef std::string string;

#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);               \
  void operator=(const TypeName&)

}  // namespace snappy

#endif  // UTIL_SNAPPY_OPENSOURCE_SNAPPY_STUBS_PUBLIC_H_