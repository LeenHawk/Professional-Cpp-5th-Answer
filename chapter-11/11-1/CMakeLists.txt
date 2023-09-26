CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(11-1)

include("../../module.cmake")

add_executable(11-1)
target_sources(11-1
    PUBLIC
    main.cpp
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    Simulator.cppm
)