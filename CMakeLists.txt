cmake_minimum_required(VERSION 3.16)
project(shape_demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shape_demo
    src/main.cpp
    src/Circle.cpp
    src/Rectangle.cpp
    )

target_include_directories(shape_demo PRIVATE include)
