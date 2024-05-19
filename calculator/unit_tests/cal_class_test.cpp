#include "calculator.hpp"
#include <gtest/gtest.h>

class test_class_calculator: public calculator
{
public:
    test_class_calculator() {};
    ~test_class_calculator() {};
    void set_current_operation(operation oper)
    {
        current_operation = oper;
    }

    void set_number_a(long long int a)
    {
        number_a = a;
    }

    void set_number_b(long long int b)
    {
        number_b = b;
    }

    void set_number_roman_number(std::string roman)
    {
        roman_number = roman;
    }

    void set_number_arabic_number(long long int arabic)
    {
        arabic_number = arabic;
    }

    int calculate_roman_to_arabic(std::string_view roman_number)
    {
        return roman_to_arabic(roman_number);
    }

    std::string_view calculate_arabic_to_roman(int arabic_number)
    {
        return arabic_to_roman(arabic_number);
    }
};

TEST(cal_class_unit_tests, test_get_number_a_return_0)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.get_number_a(), 0LL);
}

TEST(cal_class_unit_tests, test_get_number_b_return_1)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.get_number_b(), 1LL);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_MCXI)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("MCXI"), 1111);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CXI)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CXI"), 111);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_XI)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("XI"), 11);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_I)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("I"), 1);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_MCMXCIX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("MCMXCIX"), 1999);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_MCDXLIV)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("MCDXLIV"), 1444);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CDXLIV)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CDXLIV"), 444);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_DCLXVI)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("DCLXVI"), 666);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_MMMMM)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("MMMMM"), 5000);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CCC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CCC"), 300);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CCCC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CCCC"), 0);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_XXX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("XXX"), 30);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_XXXX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("XXXX"), 0);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_III)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("III"), 3);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_IIII)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("IIII"), 0);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_IIIZ)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("IIIZ"), 0);
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}