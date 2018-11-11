#include "division.h"
#include <gtest/gtest.h>

TEST(DivideBy5Test, int) {
    int input = 5;
    float expected = input/5;
    float output = divide_by_5(input);
    ASSERT_EQ(output, expected);
}

TEST(DivideBy5Test, float) {
    float input = 15.15;
    float expected = input/5;
    float output = divide_by_5(input);
    ASSERT_EQ(output, expected);
}

TEST(DivideBy10Test, int) {
    int input = 100;
    float expected = input/10;
    float output = divide_by_10(input);
    ASSERT_EQ(output, expected);
}

TEST(DivideBy10Test, float) {
    int input = 40;
    float expected = input/10;
    float output = divide_by_10(input);
    ASSERT_EQ(output, expected);
}