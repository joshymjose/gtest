#include <gtest/gtest.h>
#include "addition.h"

TEST(ExampleTest, AddTest)
{
    EXPECT_EQ(Add(2, 2), 4);
}