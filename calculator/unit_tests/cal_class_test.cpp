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

TEST(cal_class_unit_tests, test_get_get_current_operation_no_selected)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.get_current_operation(), operation::no_selected);
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

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_M)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("M"), 1000);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CM)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CM"), 900);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_DCCC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("DCCC"), 800);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_DCC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("DCC"), 700);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_DC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("DC"), 600);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_D)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("D"), 500);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CD)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CD"), 400);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CCC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CCC"), 300);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CC"), 200);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_C)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("C"), 100);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_XC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("XC"), 90);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("LXXX"), 80);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_LXX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("LXX"), 70);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_LX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("LX"), 60);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_L)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("L"), 50);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_XL)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("XL"), 40);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_XXX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("XXX"), 30);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_XX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("XX"), 20);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_X)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("X"), 10);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_IX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("IX"), 9);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_VIII)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("VIII"), 8);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_VII)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("VII"), 7);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_VI)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("VI"), 6);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_V)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("V"), 5);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_IV)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("IV"), 4);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_III)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("III"), 3);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_II)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("II"), 2);
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

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_CCCC)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("CCCC"), 0);
}

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_XXXX)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic("XXXX"), 0);
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

TEST(cal_class_unit_tests, test_roman_to_arabic_enter_empty)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_roman_to_arabic(""), 0);
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_1111)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(1111), "MCXI");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_111)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(111), "CXI");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_11)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(11), "XI");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_1000)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(1000), "M");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_900)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(900), "CM");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_800)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(800), "DCCC");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_700)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(700), "DCC");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_600)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(600), "DC");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_500)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(500), "D");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_400)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(400), "CD");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_300)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(300), "CCC");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_200)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(200), "CC");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_100)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(100), "C");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_90)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(90), "XC");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_80)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(80), "LXXX");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_70)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(70), "LXX");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_60)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(60), "LX");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_50)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(50), "L");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_40)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(40), "XL");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_30)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(30), "XXX");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_20)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(20), "XX");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_10)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(10), "X");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_9)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(9), "IX");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_8)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(8), "VIII");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_7)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(7), "VII");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_6)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(6), "VI");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_5)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(5), "V");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_4)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(4), "IV");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_3)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(3), "III");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_2)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(2), "II");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_1)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(1), "I");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_1999)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(1999), "MCMXCIX");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_1444)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(1444), "MCDXLIV");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_444)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(444), "CDXLIV");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_666)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(666), "DCLXVI");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_5000)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(5000), "MMMMM");
}

TEST(cal_class_unit_tests, test_arabic_to_roman_enter_0)
{
    test_class_calculator tested_class = test_class_calculator();
    EXPECT_EQ(tested_class.calculate_arabic_to_roman(0), "");
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}