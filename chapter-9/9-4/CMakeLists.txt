CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(9-4)

include("../../module.cmake")

add_executable(9-4)
target_sources(9-4
    PUBLIC
    main.cpp
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    Person.cppm
    PRIVATE
    Person.cpp
)