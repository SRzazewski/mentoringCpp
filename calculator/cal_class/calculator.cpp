#include "calculator.hpp"

calculator::calculator() 
{
    current_operation = operation::no_selected;
}

calculator::~calculator() {}

void calculator::setect_operation()
{
    std::cout << display_msg.get_operation_list_head_msg();
    std::cout << display_msg.get_operation_list_adding_msg();
    std::cout << display_msg.get_operation_list_subtraction_msg();
    std::cout << display_msg.get_operation_list_multiplication_msg();
    std::cout << display_msg.get_operation_list_division_msg();
    std::cout << display_msg.get_select_operation_msg();

    std::string operation;
    std::cin >> operation;

    while(!operation_is_selected(operation))
    {
        std::cin >> operation;
    }
}

operation calculator::get_current_operation()
{
    return current_operation;
}

bool calculator::operation_is_selected(std::string operation)
{
    if(operation == "+")
    {
        std::cout << display_msg.get_selected_adding_operation_msg();
        current_operation = operation::adding;
        return true;
    }
    else if(operation == "-")
    {
        std::cout << display_msg.get_selected_subtraction_operation_msg();
        current_operation = operation::subtraction;
        return true;
    }
    else if(operation == "*")
    {
        std::cout << display_msg.get_selected_multiplication_operation_msg();
        current_operation = operation::multiplication;
        return true;
    }
    else if(operation == "/")
    {
        std::cout << display_msg.get_selected_division_operation_msg();
        current_operation = operation::division;
        return true;
    }
    else
    {
        current_operation = operation::no_selected;
        return false;
    }
}