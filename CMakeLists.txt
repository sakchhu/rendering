# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

cmake_minimum_required(VERSION 3.25)

project(
    sac.rendering # CMake Project Name, which is also the name of the top-level
    # targets (e.g., library, executable, etc.).
    DESCRIPTION "A Simple PPM rendering library/exploration"
    LANGUAGES CXX
    VERSION 1.0.0
)

# [CMAKE.SKIP_TESTS]
option(
    SAC_RENDERING_BUILD_TESTS
    "Enable building tests and test infrastructure. Default: ${PROJECT_IS_TOP_LEVEL}. Values: { ON, OFF }."
    ${PROJECT_IS_TOP_LEVEL}
)

# [CMAKE.SKIP_EXAMPLES]
option(
    SAC_RENDERING_BUILD_EXAMPLES
    "Enable building examples. Default: ${PROJECT_IS_TOP_LEVEL}. Values: { ON, OFF }."
    ${PROJECT_IS_TOP_LEVEL}
)

include(CTest)

add_subdirectory(src/sac/rendering)

if(SAC_RENDERING_BUILD_TESTS)
    add_subdirectory(tests/sac/rendering)
endif()

if(SAC_RENDERING_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()
