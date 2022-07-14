##########################################
# Created by Bram Reuling
##########################################

# Find the cpp files that make up this module.
find_files(filelist ${CMAKE_CURRENT_SOURCE_DIR} "src/*.cpp")

# Create a static library
add_library(Core ${filelist})

# Add the this directory in the library
target_include_directories(Core INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)