CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(2-2)

include("../../module.cmake")

add_executable(2-2)
target_sources(2-2
PUBLIC
main.cpp
PUBLIC
FILE_SET all_my_modules TYPE CXX_MODULES FILES
)