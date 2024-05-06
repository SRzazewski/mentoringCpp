#include <iostream>
#include "cal_display.hpp"

bool operationiscorrect(std::string operation)
{
    if(operation == "+")
    {
        std::cout << "Operation selected: a + b\n";
        return true;
    }
    else if(operation == "-")
    {
        std::cout << "Operation selected: a - b\n";
        return true;
    }
    else if(operation == "*")
    {
        std::cout << "Operation selected: a * b\n";
        return true;
    }
    else if(operation == "/")
    {
        std::cout << "Operation selected: a / b\n";
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
    std::cout << "Possible operation:\n";
    std::cout << "\"+\" - adding\n";
    std::cout << "\"-\" - subtraction\n";
    std::cout << "\"*\" - multiplication\n";
    std::cout << "\"-\" - division\n\n";
    
    std::cout << "Select operation:\n";
    std::string operation;
    
    do
    {
        std::cin >> operation;
    } while (!operationiscorrect(operation));

    std::cout << "Enter number a:";
    long long int a;
    std::cin >> a;
    std::cout << "Enter number b:";
    long long int b;
    std::cin >> b;

    if (operation == "+")
    {
        long long int result = a + b;
        std::cout << "a + b = " << result << "\n";
    }
    else if (operation == "-")
    {
        long long int result = a - b;
        std::cout << "a - b = " << result << "\n";
    }
    else if (operation == "*")
    {
        long long int result = a * b;
        std::cout << "a * b = " << result << "\n";
    }
    else if(operation == "/")
    {
        while (b == 0)
        {
            std::cout << "b can not be equal 0!!\nEnter other value for b:";
            std::cin >> b;
        }
        float result = a / b;
        std::cout << "a / b = " << result << "\n";
    }

    return 0;
}