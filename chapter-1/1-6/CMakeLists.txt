CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

project(1-6)

include("../../module.cmake")

add_executable(1-6)
target_sources(1-6
PUBLIC
main.cpp
PUBLIC
FILE_SET all_my_modules TYPE CXX_MODULES FILES
AirlineTicket.cppm
PRIVATE
AirlineTicket.cpp
)