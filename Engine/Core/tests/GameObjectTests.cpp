#include "gtest/gtest.h"
#include "Core/GameObject.hpp"

// Creates an empty game object and tests if it is a nullptr.
// This test should always pass otherwise something is really wrong with your system.
TEST(GameObjectTests, CanCreateGameObject)
{
    Core::GameObject* gameObject = new Core::GameObject();

    ASSERT_NE(gameObject, nullptr);
}