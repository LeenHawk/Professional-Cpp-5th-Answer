CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(9-1)

include("../../module.cmake")

add_executable(9-1)
target_sources(9-1
    PUBLIC
    main.cpp
)