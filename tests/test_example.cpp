#include <gtest/gtest.h>
#include "example.h"

TEST(ExampleAddTest, PositiveNumbers) {
    EXPECT_EQ(example::add(2, 3), 5);
    EXPECT_EQ(example::add(10, 20), 30);
}

TEST(ExampleAddTest, NegativeNumbers) {
    EXPECT_EQ(example::add(-2, -3), -5);
    EXPECT_EQ(example::add(-10, -20), -30);
}

TEST(ExampleAddTest, MixedNumbers) {
    EXPECT_EQ(example::add(-2, 3), 1);
    EXPECT_EQ(example::add(10, -5), 5);
}

TEST(ExampleAddTest, ZeroCases) {
    EXPECT_EQ(example::add(0, 0), 0);
    EXPECT_EQ(example::add(5, 0), 5);
    EXPECT_EQ(example::add(0, -5), -5);
}

TEST(ExampleAddTest, LargeNumbers) {
    EXPECT_EQ(example::add(1000000, 2000000), 3000000);
    EXPECT_EQ(example::add(-1000000, -2000000), -3000000);
}
