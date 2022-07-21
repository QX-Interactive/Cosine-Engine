##########################################
# Created by Bram Reuling
##########################################

cmake_minimum_required(VERSION 3.20)

# Set the game name (change CosineEngine to your game name)
set(GAME_NAME CosineEngine CACHE STRING "Name of the game")

# set the project name + version
project(${GAME_NAME} VERSION "1.0.0")

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include custom macro's
include(cmake/find_files.cmake)
include(cmake/find_and_add_subdirectory.cmake)

# set the config file for CMAKE.
configure_file(Game/GameConfig.hpp.in GameConfig.hpp)

# googletest

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CmakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" . WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download)
execute_process(COMMAND ${CMAKE_COMMAND} --build . WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This adds
# the following targets: gtest, gtest_main, gmock
# and gmock_main
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src ${CMAKE_BINARY_DIR}/googletest-build)
# end googletest

# Find modules in the Engine folder and add them as a subdirectory
cosine_find_and_add_subdirectory(dirlist ${CMAKE_SOURCE_DIR} "Engine/*")

add_subdirectory(Game/)
add_subdirectory(Tests/)

# Link the libraries
foreach (dir ${dirlist})
    string(REPLACE Engine/ "" LibName ${dir})
    message(STATUS "Target linking ${LibName}")
    target_link_libraries(${GAME_NAME} PUBLIC ${LibName})
endforeach ()

target_include_directories(${GAME_NAME} PUBLIC "${PROJECT_BINARY_DIR}")

# Doxygen

# look for Doxygen package
find_package(Doxygen)

if (DOXYGEN_FOUND)
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/docs_doxygen/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile.out)

    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT})
    message(STATUS "Doxygen build started")

    add_custom_target(Docs
            COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/docs_doxygen
            COMMENT "Generating API documentation with Doxygen"
            ALL)
else()
    message(STATUS "Doxygen needs to be installed!")
endif ()