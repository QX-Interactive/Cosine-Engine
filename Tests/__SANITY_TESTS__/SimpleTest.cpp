#include "gtest/gtest.h"
#include "Core/GameObject.hpp"

namespace Cosine::EngineTests{
    namespace {
        TEST(SimpleTest, BasicAssertions) {
            EXPECT_STRNE("hello", "world");

            EXPECT_EQ(7 * 6, 42);
        }

        TEST(SimpleTest, CreateGameObject) {
            Cosine::Core::GameObject* gameObject = new Cosine::Core::GameObject();

            EXPECT_NE(gameObject, nullptr);

            delete gameObject;
        }
    }
}