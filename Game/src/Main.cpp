//
// Created by Bram Reuling on 11/07/2022.
//
#include <iostream>
#include "GameConfig.hpp"
#include "Core/Test.hpp"

int main()
{
    std::cout << "Project Name: " << PROJECT_NAME << ", Version: " << PROJECT_VER << std::endl;
    Core::Test::TestFunction();
    return 0;
}