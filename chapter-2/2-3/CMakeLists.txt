CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(2-3)

include("../../module.cmake")

add_executable(2-3)
target_sources(2-3
PUBLIC
main.cpp
PUBLIC
FILE_SET all_my_modules TYPE CXX_MODULES FILES
)