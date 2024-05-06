#include <iostream>
#include "cal_display.hpp"

bool operationiscorrect(std::string operation, cal_display &display)
{
    if(operation == "+")
    {
        std::cout << display.get_selected_adding_operation_msg();
        return true;
    }
    else if(operation == "-")
    {
        std::cout << display.get_selected_subtraction_operation_msg();
        return true;
    }
    else if(operation == "*")
    {
        std::cout << display.get_selected_multiplication_operation_msg();
        return true;
    }
    else if(operation == "/")
    {
        std::cout << display.get_selected_division_operation_msg();
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{ 
    cal_display display;
    std::cout << display.get_welcome_msg();
    std::cout << display.get_operation_list_head_msg();
    std::cout << display.get_operation_list_adding_msg();
    std::cout << display.get_operation_list_subtraction_msg();
    std::cout << display.get_operation_list_multiplication_msg();
    std::cout << display.get_operation_list_division_msg();
    
    std::cout << display.get_select_operation_msg();
    std::string operation;
    
    do
    {
        std::cin >> operation;
    } while (!operationiscorrect(operation, display));

    std::cout << display.get_enter_number_a_msg();
    long long int a;
    std::cin >> a;
    std::cout << display.get_enter_number_b_msg();
    long long int b;
    std::cin >> b;

    if (operation == "+")
    {
        long long int result = a + b;
        std::cout << display.get_adding_result_msg() << result << "\n";
    }
    else if (operation == "-")
    {
        long long int result = a - b;
        std::cout << display.get_subtraction_result_msg() << result << "\n";
    }
    else if (operation == "*")
    {
        long long int result = a * b;
        std::cout << display.get_multiplication_result_msg() << result << "\n";
    }
    else if(operation == "/")
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