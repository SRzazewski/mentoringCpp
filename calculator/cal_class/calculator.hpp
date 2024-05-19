#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <string>

enum class operation
{
    no_selected = 0,
    addition,
    subtraction,
    multiplication,
    division,
    rac,
    arc
};

struct roman_arabic
{
    const std::string roman;
    const int arbic;
};

constexpr roman_arabic roman_arbic_thousands = {"M",  1000};
constexpr roman_arabic roman_arbic_hundreds[9] =
{{"CM", 900},
{"DCCC",800},
{"DCC", 700},
{"DC",  600},
{"D",   500},
{"CD",  400},
{"CCC", 300},
{"CC",  200},
{"C",   100}};

constexpr roman_arabic roman_arbic_tens[9] =
{{"XC", 90},
{"LXXX",80},
{"LXX", 70},
{"LX",  60},
{"L",   50},
{"XL",  40},
{"XXX", 30},
{"XX",  20},
{"X",   10}};

constexpr roman_arabic roman_arbic_units[9] =
{{"IX", 9},
{"VIII",8},
{"VII", 7},
{"VI",  6},
{"V",   5},
{"IV",  4},
{"III", 3},
{"II",  2},
{"I",   1}};

constexpr std::string hundreds[9] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; 
constexpr std::string tens[9] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
constexpr std::string units[9] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

class calculator
{
public:
    calculator();
    ~calculator();
    void select_operation();
    operation get_current_operation() const;
    void enter_number_a();
    void enter_number_b();
    long long int get_number_a() const;
    long long int get_number_b() const;
    void perform_operation();
    void enter_roman_number();
    void enter_arabic_number();

private:
    operation current_operation;
    long long int number_a;
    long long int number_b;
    std::string roman_number;
    long long int arabic_number;
    
    bool set_operation(std::string_view operation);
    int roman_to_arabic(std::string_view roman_number);
    std::string arabic_to_roman(int arabic_number);
};

#endif