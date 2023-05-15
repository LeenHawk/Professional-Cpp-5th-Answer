CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

include("../../module.cmake")

project(9-4)

add_executable(${CMAKE_PROJECT_NAME})
target_sources(${CMAKE_PROJECT_NAME}
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    main.cpp
    Person.cppm
    PRIVATE
    Person.cpp
)