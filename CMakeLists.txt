#############################################
# Created by Bram Reuling
#############################################

cmake_minimum_required(VERSION 3.20)
project(Cosine-Engine)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(cmake/find_and_add_subdirectory.cmake)
include(cmake/find_files.cmake)

message(STATUS "Building Engine...")

message(STATUS "Going through Engine/...")

cosine_find_and_add_subdirectory(dirlist ${CMAKE_SOURCE_DIR} "Engine/*")

message(STATUS "Done going through Engine/!")

# Add the executable
add_executable(Cosine-Engine Game/Main.cpp)

# Link libraries
foreach (dir ${dirlist})
    message(STATUS "Target linking ${dir} library!")
    target_link_libraries(Cosine-Engine PUBLIC ${dir})
endforeach ()

target_include_directories(Cosine-Engine PUBLIC "${PROJECT_BINARY_DIR}")

foreach (dir ${dirlist})
    message(STATUS "Target including ${dir} library!")
    target_include_directories(Cosine-Engine PUBLIC ${PROJECT_SOURCE_DIR}/${dir})
endforeach ()