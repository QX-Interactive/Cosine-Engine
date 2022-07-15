#include "gtest/gtest.h"
#include "Core/Test.hpp"

TEST(One, EqualsOne)
{
    EXPECT_EQ(1, 1);
}

TEST(StringTest, EqualsString)
{
    EXPECT_EQ(Core::Test::ReturnFive(), 5);
}