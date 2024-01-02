cmake_minimum_required(VERSION 3.26)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(The_realization_of_the_village_of_elves main.cpp
        ${MY_INCLUDE_DIR}/elves.h)

target_include_directories(The_realization_of_the_village_of_elves PUBLIC ${MY_INCLUDE_DIR})