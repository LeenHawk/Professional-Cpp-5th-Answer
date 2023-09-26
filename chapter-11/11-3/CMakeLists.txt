CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(11-3)

include("../../module.cmake")

add_executable(11-3)
target_sources(11-3
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    main.cpp
    Simulator.cppm
    PRIVATE
    Simulator.bike.cppm
    Simulator.car.cppm
)