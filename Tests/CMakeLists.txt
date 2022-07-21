cmake_minimum_required(VERSION 3.20)

project(CosineTests)

enable_testing()

add_compile_definitions(COSINE_TESTS_ACTIVE)

file(GLOB_RECURSE test_files LIST_DIRECTORIES false RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")

add_executable(CosineTests ${test_files})

target_link_libraries(CosineTests gtest gmock_main Core)
add_test(NAME CosineTests COMMAND CosineTests)