CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(12-2)

include("../../module.cmake")

add_executable(12-2)
target_sources(12-2
    PUBLIC
    main.cpp
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    KeyValuePair.cppm
    KeyValuePair.main.cppm
    KeyValuePair.string.cppm
)