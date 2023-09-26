CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(12-4)

include("../../module.cmake")

add_executable(12-4)
target_sources(12-4
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    main.cpp
    concat.cppm
)