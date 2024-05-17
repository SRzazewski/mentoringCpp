#include "calculator.hpp"
#include <gtest/gtest.h>

TEST(cal_class_unit_tests, test_get_number_a_return_0)
{
    calculator tested_class = calculator();
    EXPECT_EQ(tested_class.get_number_a(), 0LL);
}

TEST(cal_class_unit_tests, test_get_number_b_return_1)
{
    calculator tested_class = calculator();
    EXPECT_EQ(tested_class.get_number_b(), 1LL);
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}