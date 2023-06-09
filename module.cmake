CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

# module is the experimental function. cmake experimental api needs to be enabled
if (CMAKE_VERSION EQUAL 3.25)
    set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "3c375311-a3c9-4396-a187-3227ef642046")
elseif (CMAKE_VERSION EQUAL 3.26)
    set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
else()
    message(WARNING "Newer CMake version, CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API may not be set.")
endif()

# Enable the module experiment
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP ON)

# Clang need to disable c++ extension
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(CMAKE_CXX_EXTENSIONS OFF)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${CMAKE_PROJECT_NAME})
endif()

set(CMAKE_CXX_STANDARD 23)