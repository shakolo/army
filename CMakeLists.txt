cmake_minimum_required(VERSION 3.6)
project(army)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Unit.cpp Unit.hpp)
add_executable(army ${SOURCE_FILES})