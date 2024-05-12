#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <iostream>
#include "cal_display.hpp"

enum class operation
{
    no_selected = 0,
    adding,
    subtraction,
    multiplication,
    division
};

class calculator
{
public:
    calculator();
    ~calculator();
    void setect_operation();
    operation get_current_operation() const;
    void set_number_a();
    void set_number_b();
    long long int get_number_a() const;
    long long int get_number_b() const;
    void perform_operation();

private:
    // cal_display display_msg;
    operation current_operation;
    bool operation_is_selected(std::string operation);
    long long int number_a;
    long long int number_b;
    long long int result;
};

#endif