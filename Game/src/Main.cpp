//
// Created by Bram Reuling on 21/07/2022.
// Main entry point for the game.
// NOTE: Do NOT change this file.
//

#ifdef COSINE_TESTS_ACTIVE
#include "gtest/gtest.h"

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
#else
#include "Core/Game.hpp"

extern Cosine::Core::Game* Cosine::Core::CreateGame();

int main(int argc, char** argv)
{
    Cosine::Core::Game* game = Cosine::Core::CreateGame();
    game->Run();
    delete game;
    return 0;
}
#endif