CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(8-1)

include("../../module.cmake")

add_executable(8-1)
target_sources(8-1
    PUBLIC
    main.cpp
)