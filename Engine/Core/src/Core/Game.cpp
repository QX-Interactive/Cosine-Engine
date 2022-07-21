//
// Created by Bram Reuling on 17/07/2022.
//

#include "Game.hpp"

namespace Cosine::Core
{

    Game::Game()
    {

    }

    Game::~Game()
    {

    }

    int Game::Run()
    {
        Start();
        while (true)
        {
            Update();
        }
        OnDestroy();
    }

    void Game::Start()
    {

    }

    void Game::Update()
    {

    }

    void Game::OnDestroy()
    {

    }
}
