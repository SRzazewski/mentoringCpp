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

    switch (operation)
    {
    case 1:
        std::cout << x1 << " + " << x2 << " = " << (x1 + x2);
        break;
    case 2:
        std::cout << x1 << " - " << x2 << " = " << (x1 - x2);
        break;
    case 3:
        std::cout << x1 << " * " << x2 << " = " << (x1 * x2);
        break;
    case 4:
        switch (x2)
        {
        case 0:
            std::cout << "x2 is equal "<< x2 <<". Division operation is not allowed";
            break;
        default:
            std::cout << x1 << " / " << x2 << " = " << (x1 / x2);
            break;
        }
        break;
    case 5:
        switch (x2)
        {
        case 0:
            std::cout << "x2 is equal "<< x2 <<". Modulus operation is not allowed";
            break;
        default:
            std::cout << x1 << " % " << x2 << " = " << (x1 % x2);
            break;
        }
        break;
    default:
        std::cout << "Operation was not selected";
        break;
    }

    return 0;
}