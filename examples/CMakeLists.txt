# SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

set(ALL_EXAMPLES random_noise)

message("Examples to be built: ${ALL_EXAMPLES}")

foreach(example ${ALL_EXAMPLES})
    add_executable(sac.rendering.examples.${example})
    target_sources(sac.rendering.examples.${example} PRIVATE ${example}.cpp)
    target_link_libraries(
        sac.rendering.examples.${example}
        PRIVATE sac::rendering
    )
endforeach()
