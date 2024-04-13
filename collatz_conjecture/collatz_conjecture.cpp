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
            x = x / 2;
        }
        else
        {
            x = (3 * x) + 1;
        }

    std::cout << x << "\n";

    }
    
    return 0;
}