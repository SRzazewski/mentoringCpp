#include "cal_display.hpp"
#include "calculator.hpp"
#include <iostream>

calculator::calculator():
    current_operation(operation::no_selected),
    number_a(0),
    number_b(1), //for division, b cannot be equal 0
    roman_number(""),
    arabic_number(0)
{    
    std::cout << welcome_msg << "\n";
}

calculator::~calculator() {}

void calculator::select_operation()
{
    std::cout << operation_list_head_msg << "\n";
    std::cout << operation_list_adding_msg << "\n";
    std::cout << operation_list_subtraction_msg << "\n";
    std::cout << operation_list_multiplication_msg << "\n";
    std::cout << operation_list_division_msg << "\n";
    std::cout << operation_list_rac_msg<< "\n";
    std::cout << operation_list_arc_msg<< "\n";
    std::cout << select_operation_msg << "\n";

    std::string operation;
    std::cin >> operation;

    while(!set_operation(operation))
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

void calculator::enter_number_a()
{
    std::cout << enter_number_a_msg << "\n";
    long long int a;
    std::cin >> a;
    this->number_a = a;
}
void calculator::enter_number_b()
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
    if (this->get_current_operation() == operation::addition)
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
            this->enter_number_b();
        }
        float result = static_cast<float>(this->get_number_a()) / static_cast<float>(this->get_number_b());
        std::cout << division_result_msg << result << "\n";
    }
    else if(this->get_current_operation() == operation::rac)
    {
        int arabic_num = roman_to_arabic(roman_number);
        if(arabic_num != 0)
        {
            std::cout << roman_number << " -> " << arabic_num << "\n";
        }
        else
        {
            std::cout << "The roman number: " << roman_number << " is incorrect!\n";
        }
    }
    else if(this->get_current_operation() == operation::arc)
    {
        std::cout << arabic_number << " -> " << arabic_to_roman(arabic_number) << "\n";
    }
}

bool calculator::set_operation(std::string_view operation)
{
    if(operation == "+")
    {
        std::cout << selected_adding_operation_msg << "\n";
        this->current_operation = operation::addition;
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
    else if(operation == "rac")
    {
        std::cout << selected_rac_operation_msg << "\n";
        this->current_operation = operation::rac;
        return true;
    }
    else if(operation == "arc")
    {
        std::cout << selected_arc_operation_msg << "\n";
        this->current_operation = operation::arc;
        return true;
    }
    else
    {
        this->current_operation = operation::no_selected;
        return false;
    }
}
void calculator::enter_roman_number()
{
    std::cout << enter_roman_num_msg << "\n";
    std::string roman;
    std::cin >> roman;
    this->roman_number = roman;
}

void calculator::enter_arabic_number()
{
    std::cout << enter_arabic_num_msg << "\n";
    long long int arabic;
    std::cin >> arabic;
    this->arabic_number = arabic;
}

int calculator::roman_to_arabic(std::string_view roman_number)
{
    int length = roman_number.length();
    int result = 0;
    int main_position_pointer = 0;

    for(int i = main_position_pointer; i < length; ++i)
    {
        int position = main_position_pointer;
        if(roman_number[i] == 'M')
        {
            result = result + roman_arbic_thousands.arbic;
            position = i + 1;
            main_position_pointer = position;
            if(position == length)
            {
                return result;
            }
        }
        else 
        {
            break;
        }
    }

    for(int i = 0; i< 9; ++i)
    {
        int position = main_position_pointer;
        int last_position = position;
        position = roman_number.find(roman_arbic_hundreds[i].roman, last_position);
        if(position == main_position_pointer)
        {
            result = result + roman_arbic_hundreds[i].arbic;
            position = position + roman_arbic_hundreds[i].roman.length();
            main_position_pointer = position;
            if(position == length)
            {
                return result;
            }
            break;
        }
    }

    for(int i = 0; i< 9; ++i)
    {
        int position = main_position_pointer;
        int last_position = position;
        position = roman_number.find(roman_arbic_tens[i].roman, last_position);
        if(position == main_position_pointer)
        {
            result = result + roman_arbic_tens[i].arbic;
            position = position + roman_arbic_tens[i].roman.length();
            main_position_pointer = position;
            if(position == length)
            {
                return result;
            }
            break;
        }
    }

    for(int i = 0; i< 9; ++i)
    {
        int position = main_position_pointer;
        int last_position = position;
        position = roman_number.find(roman_arbic_units[i].roman, last_position);
        if(position == main_position_pointer)
        {
            result = result + roman_arbic_units[i].arbic;
            position = position + roman_arbic_units[i].roman.length();
            main_position_pointer = position;
            if(position == length)
            {
                return result;
            }
            break;
        }
    }
    result = 0;
    return result;
}

std::string calculator::arabic_to_roman(int arabic_number)
{
    std::string roman_number = "";

    if(arabic_number >= 1000)
    {
        roman_number.append(arabic_number/1000, 'M');
    }

    if((arabic_number % 1000) >= 100)
    {
        roman_number = roman_number + hundreds[((arabic_number % 1000) / 100) - 1];
    }
    
    if(arabic_number % 100 >= 10)
    {
        roman_number = roman_number + tens[((arabic_number % 100) / 10) - 1];
    }
    
    if(arabic_number % 10 > 0)
    {
        roman_number = roman_number + units[(arabic_number % 10) - 1];
    }
    return roman_number;
}