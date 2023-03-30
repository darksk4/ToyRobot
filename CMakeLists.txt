cmake_minimum_required(VERSION 3.8)

project(ToyRobot)

include(${CMAKE_CURRENT_SOURCE_DIR}/src/Source.cmake)
if (NOT WIN32)
    include(${CMAKE_CURRENT_SOURCE_DIR}/test/Test.cmake)
endif()
