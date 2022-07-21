//
// Created by Bram Reuling on 11/07/2022.
//
#include "Core/Game.hpp"

class TestGame : public Cosine::Core::Game {
public:
    TestGame() = default;
    ~TestGame() override = default;
};

Cosine::Core::Game* Cosine::Core::CreateGame()
{
    return new TestGame();
}