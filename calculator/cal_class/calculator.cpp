#include "calculator.hpp"

calculator::calculator() 
{
    this->current_operation = operation::no_selected;
    this->number_a = 0;
    this->number_b = 1; //for division, b cannot be equal 0
    this->result = 0;
    
    std::cout << welcome_msg << "\n";
}

calculator::~calculator() {}

void calculator::setect_operation()
{
    std::cout << operation_list_head_msg << "\n";
    std::cout << operation_list_adding_msg << "\n";
    std::cout << operation_list_subtraction_msg << "\n";
    std::cout << operation_list_multiplication_msg << "\n";
    std::cout << operation_list_division_msg << "\n";
    std::cout << select_operation_msg << "\n";

    std::string operation;
    std::cin >> operation;

    while(!operation_is_selected(operation))
    {
        std::cout << selected_incorect_operation_msg << "\n";
        std::cout << select_operation_msg << "\n";
        std::cin >> operation;
    }
}

operation calculator::get_current_operation() const
{
    return this->current_operation;
}

void calculator::set_number_a()
{
    std::cout << enter_number_a_msg << "\n";
    long long int a;
    std::cin >> a;
    this->number_a = a;
}
void calculator::set_number_b()
{
    std::cout << enter_number_b_msg << "\n";
    long long int b;
    std::cin >> b;
    this->number_b = b;
}

long long int calculator::get_number_a() const
{
    return this->number_a;
}

long long int calculator::get_number_b() const
{
    return this->number_b;
}

void calculator::perform_operation()
{
    if (this->get_current_operation() == operation::adding)
    {
        long long int result = this->get_number_a() + this->get_number_b();
        std::cout << adding_result_msg << result << "\n";
    }
    else if (this->get_current_operation() == operation::subtraction)
    {
        long long int result = this->get_number_a() - this->get_number_b();
        std::cout << subtraction_result_msg << result << "\n";
    }
    else if (this->get_current_operation() == operation::multiplication)
    {
        long long int result = this->get_number_a() * this->get_number_b();
        std::cout << multiplication_result_msg << result << "\n";
    }
    else if(this->get_current_operation() == operation::division)
    {
        while (this->get_number_b() == 0)
        {
            std::cout << wrong_enter_vaule_division_msg << "\n";
            this->set_number_b();
        }
        float result = this->get_number_a() / this->get_number_b();
        std::cout << division_result_msg << result << "\n";
    }
}

bool calculator::operation_is_selected(std::string operation)
{
    if(operation == "+")
    {
        std::cout << selected_adding_operation_msg << "\n";
        this->current_operation = operation::adding;
        return true;
    }
    else if(operation == "-")
    {
        std::cout << selected_subtraction_operation_msg << "\n";
        this->current_operation = operation::subtraction;
        return true;
    }
    else if(operation == "*")
    {
        std::cout << selected_multiplication_operation_msg << "\n";
        this->current_operation = operation::multiplication;
        return true;
    }
    else if(operation == "/")
    {
        std::cout << selected_division_operation_msg << "\n";
        this->current_operation = operation::division;
        return true;
    }
    else
    {
        this->current_operation = operation::no_selected;
        return false;
    }
}