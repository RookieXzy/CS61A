cmake_minimum_required(VERSION 3.28)

set(projectName example)
set(CMAKE_CXX_FLAGS "-std=c++11")

project(${projectName})

find_package(SDL2 REQUIRED COMPONENTS SDL2)

add_executable(${projectName} test.cpp)


target_link_libraries(${projectName} PRIVATE SDL2::SDL2)