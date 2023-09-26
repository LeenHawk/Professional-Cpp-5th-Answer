CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(10-3)

include("../../module.cmake")

add_executable(10-3)
target_sources(10-3
    PUBLIC
    main.cpp
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    hr.cppm
    person.cppm
    employee.cppm
    manager.cppm 
    director.cppm
)