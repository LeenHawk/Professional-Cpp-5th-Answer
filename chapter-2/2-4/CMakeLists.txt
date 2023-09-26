CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(2-4)

include("../../module.cmake")

add_executable(2-4)
target_sources(2-4
PUBLIC
main.cpp
PUBLIC
FILE_SET all_my_modules TYPE CXX_MODULES FILES
)