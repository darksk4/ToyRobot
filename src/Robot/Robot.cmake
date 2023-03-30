cmake_minimum_required(VERSION 3.8)

file(GLOB robotSource
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Robot/Robot.cpp
)

add_library(robot
    STATIC
        ${robotSource}
)

target_include_directories(robot
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Face
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Robot
)

target_compile_options(robot
    PRIVATE
        -std=c++14
        -g
        -Wall
        #        -Werror errors in the compilation
)

target_link_libraries(robot
    PRIVATE
        face
)
