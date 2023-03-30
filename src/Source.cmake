cmake_minimum_required(VERSION 3.8)

if (WIN32)
    set(msvr /NODEFAULTLIB:MSVCRT)
    set(werrorflag "")
else()
    set(msvr "")
    set(werrorflag -Werror)
endif()

include(${CMAKE_CURRENT_SOURCE_DIR}/src/Face/Face.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/src/Robot/Robot.cmake)

add_executable(execute ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

add_dependencies(execute face)

target_include_directories(execute
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Face
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Robot
)

target_compile_options(execute
    PRIVATE
        -std=c++14
        -g
        -Wall
        ${werrorflag}
)

target_link_libraries(execute
    PRIVATE
        face
        robot
        ${msvr}
)
