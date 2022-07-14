find_files(filelist ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")
add_executable(${GAME_NAME} ${filelist})