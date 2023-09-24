CMAKE_MINIMUM_REQUIRED(VERSION 3.25)

set(CMAKE_CXX_STANDARD 23)

# module is the experimental function. cmake experimental api needs to be enabled
if (CMAKE_VERSION EQUAL 3.25)
    set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "3c375311-a3c9-4396-a187-3227ef642046")
elseif (CMAKE_VERSION EQUAL 3.26)
    set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
elseif (CMAKE_VERSION EQUAL 3.27)
    set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "aa1f7df0-828a-4fcd-9afc-2dc80491aca7")
else()
    message(WARNING "Newer CMake version, CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API may not be set.")
endif()

# Enable the module experiment
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP ON)

# Clang need to disable c++ extension
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(CMAKE_CXX_EXTENSIONS OFF)
    include(FetchContent)
    FetchContent_Declare(
        std
        URL "file://${LIBCXX_BUILD}/modules/c++/v1/"
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
    )
    FetchContent_GetProperties(std)
    if(NOT std_POPULATED)
        FetchContent_Populate(std)
        add_subdirectory(${std_SOURCE_DIR} ${std_BINARY_DIR} EXCLUDE_FROM_ALL)
    endif()

    #
        # Adjust project compiler flags
    #

        add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-fprebuilt-module-path=${CMAKE_BINARY_DIR}/_deps/std-build/CMakeFiles/std.dir/>)
        add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-nostdinc++>)
        # The include path needs to be set to be able to use macros from headers.
        # For example from, the headers <cassert> and <version>.
        add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-isystem>)
        add_compile_options($<$<COMPILE_LANGUAGE:CXX>:${LIBCXX_BUILD}/include/c++/v1>)

    #
    # Adjust project linker flags
    #

    add_link_options($<$<COMPILE_LANGUAGE:CXX>:-nostdlib++>)
    add_link_options($<$<COMPILE_LANGUAGE:CXX>:-L${LIBCXX_BUILD}/lib>)
    add_link_options($<$<COMPILE_LANGUAGE:CXX>:-Wl,-rpath,${LIBCXX_BUILD}/lib>)
    # Linking against std is required for CMake to get the proper dependencies
    link_libraries(std c++)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${CMAKE_PROJECT_NAME})
endif()