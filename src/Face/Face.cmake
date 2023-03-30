cmake_minimum_required(VERSION 3.8)

file(GLOB faceSource
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Face/Face.cpp
)

add_library(face
    SHARED
        ${faceSource}
)

target_include_directories(face
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Face
)

target_compile_options(face
    PRIVATE
        -std=c++14
        -Wall
        ${werrorflag}
)

if (WIN32)
target_link_options(face
    PRIVATE
        /NODEFAULTLIB:msvcrt
        /NODEFAULTLIB:libcmt
)
endif()
