CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(11-3)

include("../../module.cmake")

add_executable(11-3)
target_sources(11-3
    PUBLIC
    main.cpp
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    Simulator.cppm
    Simulator.bike.cppm
    Simulator.car.cppm
)