/*
Copyright 2017 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "tests/util/fake_entity_def.h"

#include "gtest/gtest.h"
#include "tests/util/entity_def_test.h"
#include "tests/util/fake_entity_test.h"

namespace lull {
namespace testing {

INSTANTIATE_TYPED_TEST_CASE_P(Fake, EntityDefTest,
                              LULL_ENTITY_TEST_TYPE(FakeEntityDef,
                                                    FakeComponentDef));

}  // namespace testing
}  // namespace lull