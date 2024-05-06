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
    operation get_current_operation();

private:
    cal_display display_msg;
    operation current_operation;
    bool operation_is_selected(std::string operation);
};

#endif