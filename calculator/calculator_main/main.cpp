#include <iostream>
#include "cal_display.hpp"
#include "calculator.hpp"

int main()
{ 
    cal_display display;
    calculator calculator;

    std::cout << display.get_welcome_msg();
    calculator.setect_operation();


    std::cout << display.get_enter_number_a_msg();
    long long int a;
    std::cin >> a;
    std::cout << display.get_enter_number_b_msg();
    long long int b;
    std::cin >> b;

    if (calculator.get_current_operation() == operation::adding)
    {
        long long int result = a + b;
        std::cout << display.get_adding_result_msg() << result << "\n";
    }
    else if (calculator.get_current_operation() == operation::subtraction)
    {
        long long int result = a - b;
        std::cout << display.get_subtraction_result_msg() << result << "\n";
    }
    else if (calculator.get_current_operation() == operation::multiplication)
    {
        long long int result = a * b;
        std::cout << display.get_multiplication_result_msg() << result << "\n";
    }
    else if(calculator.get_current_operation() == operation::division)
    {
        while (b == 0)
        {
            std::cout << display.get_wrong_enter_vaule_division_msg();
            std::cin >> b;
        }
        float result = a / b;
        std::cout << display.get_division_result_msg() << result << "\n";
    }

    return 0;
}