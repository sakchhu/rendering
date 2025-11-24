# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

find_package(GTest REQUIRED)

add_executable(sac.rendering.tests.image)
target_sources(sac.rendering.tests.image PRIVATE image.test.cpp)
target_link_libraries(
    sac.rendering.tests.image
    PRIVATE sac::rendering GTest::gtest GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(sac.rendering.tests.image)
