cmake_minimum_required(VERSION 3.10)
project(RectangleClass LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)


set(CMAKE_CXX_STANDARD 20)
add_executable(main main.cpp Rectangle.cpp)