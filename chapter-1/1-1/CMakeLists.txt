CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(1-1)

include("../../module.cmake")

add_executable(1-1)
target_sources(1-1
    PUBLIC
    main.cpp
    PRIVATE
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    employee.cppm
)