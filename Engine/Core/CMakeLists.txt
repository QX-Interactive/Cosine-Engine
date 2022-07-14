cmake_minimum_required(VERSION 3.20)
project(Cosine-Core)

message(STATUS "Adding Cosine-Core...")

find_files(filelist ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp" "*.hpp")

foreach (file ${filelist})
    message(STATUS "File in list: ${file}")
endforeach ()

add_library(Core ${filelist})