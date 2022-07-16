#include "gtest/gtest.h"
#include "Core/Test.hpp"

TEST(SimpleTest, EqualsOne)
{
    EXPECT_EQ(1, 1);
}

TEST(SimpleTest, EqualsString)
{
    EXPECT_EQ(Core::Test::ReturnFive(), 5);
}