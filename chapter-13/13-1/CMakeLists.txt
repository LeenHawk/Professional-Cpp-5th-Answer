CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(13-1)

include("../../module.cmake")

add_executable(13-1)
target_sources(13-1
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    main.cpp
    Person.cppm
)