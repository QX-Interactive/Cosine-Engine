find_files(filelist ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")
find_files(filelistHPP ${CMAKE_CURRENT_SOURCE_DIR} "*.hpp")
add_executable(${GAME_NAME} ${filelist} ${filelistHPP})