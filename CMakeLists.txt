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

# Find modules in the Engine folder and add them as a subdirectory
cosine_find_and_add_subdirectory(dirlist ${CMAKE_SOURCE_DIR} "Engine/*")

add_subdirectory(Game/)

# add the executable
#add_executable(${GAME_NAME} Game/Main.cpp)

# Link the libraries
foreach (dir ${dirlist})
    string(REPLACE Engine/ "" LibName ${dir})
    message(STATUS "Target linking ${LibName}")
    target_link_libraries(${GAME_NAME} PUBLIC ${LibName})
endforeach ()

target_include_directories(${GAME_NAME} PUBLIC "${PROJECT_BINARY_DIR}")