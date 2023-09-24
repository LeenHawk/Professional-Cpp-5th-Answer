CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(7-3)

include("../../module.cmake")

add_executable(${CMAKE_PROJECT_NAME})
target_sources(${CMAKE_PROJECT_NAME}
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    main.cpp
)