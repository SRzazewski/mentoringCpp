#include <iostream>
#include "cal_display.hpp"
#include "calculator.hpp"

int main()
{
    calculator calculator;

    calculator.setect_operation();

    calculator.set_number_a();
    calculator.set_number_b();

    calculator.perform_operation();

    return 0;
}