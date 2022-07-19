#include "addition.h"
#include <gtest/gtest.h>

TEST(AdditionTests, test1) {
    
    EXPECT_EQ(Add(2,2), 4) << "adding 2 and 2";
    EXPECT_EQ(Add(2,2), 4) << "adding failed";
}

TEST(AdditionTests, test2) {
    
    EXPECT_EQ(Add(2,2), 4) << "adding 2 and 2";
    EXPECT_EQ(Add(24,2), 4) << "adding 2 and 2";
    EXPECT_TRUE(false) << "diagnostic message";
    ASSERT_EQ(Add(2,2), 4) << "adding failed";
}