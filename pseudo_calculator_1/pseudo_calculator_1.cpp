#include <iostream>

int main()
{
    int x1 = 0;
    int x2 = 0;
    int operation = 0;
	std::cout << "Put 1st number:";
    std::cin >> x1;
	std::cout << "Put 2nd number:";
    std::cin >> x2;
    std::cout << "1-addition\n";
    std::cout << "2-subtraction\n";
    std::cout << "3-multiplication\n";
    std::cout << "4-division\n";
    std::cout << "5-modulus\n";
    std::cout << "Select operations:";
    std::cin >> operation;

	if (operation != 0)
    {
        if(operation == 1)
        {
            std::cout << x1 << " + " << x2 << " = " << (x1 + x2);
        }
        else if (operation == 2)
        {
            std::cout << x1 << " - " << x2 << " = " << (x1 - x2);
        }
        else if (operation == 3)
        {
            std::cout << x1 << " * " << x2 << " = " << (x1 * x2);
        }
        else if (operation == 4)
        {
            if (x2 == 0)
            {
                std::cout << "x2 is equal "<< x2 <<". Division operation is not allowed";
            }
            else
            {
                std::cout << x1 << " / " << x2 << " = " << (x1 / x2);
            }
        }
        else if (operation == 5)
        {
            if (x2 == 0)
            {
                std::cout << "x2 is equal "<< x2 <<". Modulus operation is not allowed";
            }
            else
            {
                std::cout << x1 << " % " << x2 << " = " << (x1 % x2);
            }
        }
    }
    else
    {
        std::cout << "Operation is not selected";
    }
}