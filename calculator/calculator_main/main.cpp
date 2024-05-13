#include "cal_display.hpp"
#include "calculator.hpp"
#include <iostream>

int main()
{
    calculator calculator_object;

    calculator_object.setect_operation();

    if(operation curr_operation = calculator_object.get_current_operation(); 
        curr_operation == operation::addition || curr_operation == operation::subtraction ||
        curr_operation == operation::multiplication || curr_operation == operation::division)
    {
        calculator_object.set_number_a();
        calculator_object.set_number_b();
    }
    else if(curr_operation == operation::arc)
    {
        calculator_object.set_arabic_number();
    }
    else if(curr_operation == operation::rac)
    {
        calculator_object.set_roman_number();
    }

    calculator_object.perform_operation();

    return 0;
}