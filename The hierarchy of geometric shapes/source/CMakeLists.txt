cmake_minimum_required(VERSION 3.26)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(The_hierarchy_of_geometric_shapes main.cpp
        ${MY_INCLUDE_DIR}/geo-shapes.h
        geo-shapes.cpp)

target_include_directories(The_hierarchy_of_geometric_shapes PUBLIC ${MY_INCLUDE_DIR})