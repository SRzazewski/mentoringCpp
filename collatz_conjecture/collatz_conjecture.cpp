#include <iostream>

int main()
{
    
    std::cout << "Enter a number: ";
    int x = 0;
    std::cin >> x;

    while (x > 1)
    {
        if (x % 2 == 0)
        {
            std::cout << (x / 2) << "\n";
        }
        else
        {
            std::cout << ((3 * x) + 1) << "\n";
        }
    }
    return 0;
}