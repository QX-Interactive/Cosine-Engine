include_directories(${PROJECT_SOURCE_DIR})

file(GLOB_RECURSE test_files LIST_DIRECTORIES false RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")

foreach (file ${test_files})
    message(STATUS "Found file in Core Tests: ${file}")
endforeach ()

add_executable(CoreTests ${test_files})
target_link_libraries(CoreTests gtest gmock_main Core)
add_test(NAME CoreTests COMMAND CoreTests)