#include "cal_display.hpp"
#include "calculator.hpp"

int main()
{
    calculator calculator_object;

    calculator_object.setect_operation();

    calculator_object.set_number_a();
    calculator_object.set_number_b();

    calculator_object.perform_operation();

    return 0;
}