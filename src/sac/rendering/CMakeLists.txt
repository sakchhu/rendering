# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

add_library(sac.rendering)
add_library(sac::rendering ALIAS sac.rendering)

target_sources(sac.rendering PRIVATE image.cpp)

target_sources(
    sac.rendering
    PUBLIC
        FILE_SET HEADERS
            BASE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/../../../include"
            FILES
                "${CMAKE_CURRENT_SOURCE_DIR}/../../../include/sac/rendering/image.hpp"
)

set_target_properties(sac.rendering PROPERTIES VERIFY_INTERFACE_HEADER_SETS ON)

find_package(beman-install-library REQUIRED)
beman_install_library(sac.rendering)
