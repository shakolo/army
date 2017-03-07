cmake_minimum_required(VERSION 3.6)
project(army)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Unit.cpp Unit.hpp State.cpp State.hpp Ability.cpp Ability.hpp Soldier.cpp Soldier.hpp Rogue.cpp Rogue.hpp Berserker.cpp Berserker.hpp Vampire.cpp Vampire.hpp)
add_executable(army ${SOURCE_FILES})