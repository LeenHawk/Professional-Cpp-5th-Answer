CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

include("../../module.cmake")

project(11-3)

add_executable(${CMAKE_PROJECT_NAME})
target_sources(${CMAKE_PROJECT_NAME}
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    main.cpp
    Simulator.cppm
    PRIVATE
    Simulator.bike.cppm
    Simulator.car.cppm
    Simulator.internals.cppm
)