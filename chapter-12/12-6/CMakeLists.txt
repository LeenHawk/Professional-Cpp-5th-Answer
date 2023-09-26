CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(12-6)

include("../../module.cmake")

add_executable(12-6)
target_sources(12-6
    PUBLIC
    FindTemplate.cpp
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    SpreadsheetCell.cppm
    PUBLIC
    SpreadsheetCell.cpp
)