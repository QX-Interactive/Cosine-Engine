//
// Created by Bram Reuling on 11/07/2022.
//
#include <iostream>
#include "GameConfig.hpp"
#include "Core/GameObject.hpp"

int main()
{
    std::cout << "Project Name: " << PROJECT_NAME << ", Version: " << PROJECT_VER << std::endl;
    Cosine::Core::GameObject* gameObject = new Cosine::Core::GameObject();
    return 0;
}