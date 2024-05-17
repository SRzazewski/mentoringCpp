#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include "cal_display.hpp"

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