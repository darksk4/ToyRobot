cmake_minimum_required(VERSION 3.8)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/googletest-1.13.0)

file (GLOB ActualTests
    ${CMAKE_CURRENT_SOURCE_DIR}/test/tests/gtest_main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/test/tests/FaceTest.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/test/tests/RobotTest.cpp
)


add_executable(test ${ActualTests})

add_dependencies(test execute)


target_include_directories(test
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Face
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Robot
)

target_link_libraries(test
    PUBLIC
        gtest
        face
        robot
)

target_compile_options(test
    PRIVATE
        -fPIC
        -std=c++14
        -g
        -Wall
        #        -Werror errors in the compilation
)
