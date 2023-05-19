CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

include("../../module.cmake")

project(12-6)

add_executable(${CMAKE_PROJECT_NAME})
target_sources(${CMAKE_PROJECT_NAME}
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    FindTemplate.cpp
    SpreadsheetCell.cppm
    PRIVATE 
    SpreadsheetCell.cpp
)