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
    int c_repetition = 0;
    int x_repetition = 0;
    int i_repetition = 0;
    for (int i = 0; i < length; ++i)
    {
        if (roman_number[i] == 'M' && roman_number[i-1] != 'C')
        {
            result = result + 1000;
        }
        else if (roman_number[i] == 'C' && roman_number[i+1] == 'M')
        {
            result = result + 900;
            ++i;
        }
        else if (roman_number[i] == 'D' && roman_number[i+1] != 'M' && roman_number[i-1] != 'C')
        {
            result = result + 500;
        }
        else if (roman_number[i] == 'C' && roman_number[i+1] == 'D')
        {
            result = result + 400;
            ++i;
        }
        else if (roman_number[i] == 'C' && roman_number[i+1] != 'M' && roman_number[i+1] != 'D' 
                && roman_number[i-1] != 'X')
        {
            result = result + 100;
            if(++c_repetition > 3)
            {
                return 0;
            }
        }
        else if (roman_number[i] == 'X' && roman_number[i+1] == 'C')
        {
            result = result + 90;
            ++i;
        }
        else if (roman_number[i] == 'L' && roman_number[i+1] != 'M' && roman_number[i+1] != 'D'
                && roman_number[i+1] != 'C' && roman_number[i-1] != 'X')
        {
            result = result + 50;
        }
        else if (roman_number[i] == 'X' && roman_number[i+1] == 'L')
        {
            result = result + 40;
            ++i;
        }
        else if (roman_number[i] == 'X' && roman_number[i+1] != 'M' && roman_number[i+1] != 'D'
                && roman_number[i+1] != 'C' && roman_number[i+1] != 'L' && roman_number[i-1] != 'I')
        {
            result = result + 10;
            if(++x_repetition > 3)
            {
                return 0;
            }
        }
        else if (roman_number[i] == 'I' && roman_number[i+1] == 'X')
        {
            result = result + 9;
            ++i;
        }
        else if (roman_number[i] == 'V' && roman_number[i+1] != 'M' && roman_number[i+1] != 'D'
                && roman_number[i+1] != 'C' && roman_number[i+1] != 'L' && roman_number[i+1] != 'X'
                && roman_number[i-1] != 'I')
        {
            result = result + 5;
        }
        else if (roman_number[i] == 'I' && roman_number[i+1] == 'V')
        {
            result = result + 4;
            ++i;
        } 
        else if ((roman_number[i] == 'I' && (i == length - 1))
                || (roman_number[i] == 'I' && roman_number[i+1] != 'M' && roman_number[i+1] != 'D'
                && roman_number[i+1] != 'C' && roman_number[i+1] != 'L' && roman_number[i+1] != 'X' 
                && roman_number[i+1] != 'V' && roman_number[i+1] == 'I'))
        {
            result = result + 1;
            if(++i_repetition > 3)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return result;
}

std::string calculator::arabic_to_roman(int arabic_number)
{
    std::string roman_number = "";

    if(arabic_number >= 1000)
    {
        for(int i = 0; i < arabic_number/1000; ++i)
        {
            roman_number = roman_number + "M";
        }
        roman_number = roman_number + arabic_to_roman(arabic_number % 1000);
    }
    else if(arabic_number >= 100)
    {
        if(int x = arabic_number / 100; x == 9)
        {
            roman_number =+ "CM";
        }
        else if(x == 8)
        {
            roman_number =+ "DCCC";
        }
        else if(x == 7)
        {
            roman_number =+ "DCC";
        }
        else if(x == 6)
        {
            roman_number =+ "DC";
        }
        else if(x == 5)
        {
            roman_number =+ "D";
        }
        else if(x == 4)
        {
            roman_number =+ "CD";
        }
        else if(x == 3)
        {
            roman_number =+ "CCC";
        }
        else if(x == 2)
        {
            roman_number =+ "CC";
        }
        else if(x == 1)
        {
            roman_number =+ "C";
        }
        roman_number = roman_number + arabic_to_roman(arabic_number % 100);
    }
    else if(arabic_number >= 10)
    {
        if(int x = arabic_number / 10; x == 9)
        {
            roman_number =+ "XC";
        }
        else if(x == 8)
        {
            roman_number =+ "LXXX";
        }
        else if(x == 7)
        {
            roman_number =+ "LXX";
        }
        else if(x == 6)
        {
            roman_number =+ "LX";
        }
        else if(x == 5)
        {
            roman_number =+ "L";
        }
        else if(x == 4)
        {
            roman_number =+ "XL";
        }
        else if(x == 3)
        {
            roman_number =+ "XXX";
        }
        else if(x == 2)
        {
            roman_number =+ "XX";
        }
        else if(x == 1)
        {
            roman_number =+ "X";
        }
        roman_number = roman_number + arabic_to_roman(arabic_number % 10);
        
    }
    else if(arabic_number > 0)
    {
        if(int x = arabic_number; x == 9)
        {
            roman_number =+ "IX";
        }
        else if(x == 8)
        {
            roman_number =+ "VIII";
        }
        else if(x == 7)
        {
            roman_number =+ "VII";
        }
        else if(x == 6)
        {
            roman_number =+ "VI";
        }
        else if(x == 5)
        {
            roman_number =+ "V";
        }
        else if(x == 4)
        {
            roman_number =+ "IV";
        }
        else if(x == 3)
        {
            roman_number =+ "III";
        }
        else if(x == 2)
        {
            roman_number =+ "II";
        }
        else if(x == 1)
        {
            roman_number =+ "I";
        }
    }
    return roman_number;
}