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
    void setect_operation();
    operation get_current_operation() const;
    void set_number_a();
    void set_number_b();
    long long int get_number_a() const;
    long long int get_number_b() const;
    void perform_operation();

private:
    operation current_operation;
    long long int number_a;
    long long int number_b;
    long long int result;
    
    bool set_operation(std::string_view operation);
};

#endif