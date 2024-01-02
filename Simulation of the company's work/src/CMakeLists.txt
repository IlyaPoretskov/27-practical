cmake_minimum_required(VERSION 3.26)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(Simulation_of_the_company_s_work main.cpp
        ${MY_INCLUDE_DIR}/company.h
        company.cpp)

target_include_directories(Simulation_of_the_company_s_work PUBLIC ${MY_INCLUDE_DIR})