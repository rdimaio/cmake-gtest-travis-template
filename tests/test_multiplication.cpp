#include "multiplication.h"
#include <gtest/gtest.h>

TEST(MultiplyBy5Test, int) {
    int input = 5;
    float expected = input*5;
    float output = multiply_by_5(input);
    ASSERT_EQ(output, expected);
}

TEST(MultiplyBy5Test, float) {
    float input = 11.1;
    float expected = input*5;
    float output = multiply_by_5(input);
    ASSERT_EQ(output, expected);
}

TEST(MultiplyBy10Test, int) {
    int input = 10;
    float expected = input*10;
    float output = multiply_by_10(input);
    ASSERT_EQ(output, expected);
}

TEST(MultiplyBy10Test, float) {
    int input = 22.2;
    float expected = input*10;
    float output = multiply_by_10(input);
    ASSERT_EQ(output, expected);
}