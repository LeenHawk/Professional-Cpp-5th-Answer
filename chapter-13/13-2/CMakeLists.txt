CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(13-2)

include("../../module.cmake")

add_executable(13-2)
target_sources(13-2
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    main.cpp
    Person.cppm
)