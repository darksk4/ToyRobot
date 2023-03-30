cmake_minimum_required(VERSION 3.8)

file(GLOB faceSource
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Face/Face.cpp
)

add_library(face
    STATIC
        ${faceSource}
)

target_include_directories(face
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Face
)

target_compile_options(face
    PRIVATE
        -std=c++11
        -g
        -Wall
        -Werror
)
