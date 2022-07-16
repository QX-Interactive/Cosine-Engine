include_directories(${PROJECT_SOURCE_DIR})

add_executable(CoreTests Main.cpp SimpleTest.cpp)
target_link_libraries(CoreTests gtest gmock_main Core)
add_test(NAME CoreTests COMMAND CoreTests)