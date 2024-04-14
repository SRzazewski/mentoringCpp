#include <iostream>

int calculate_next_collatzs_number(int number)
{
    if (number % 2 == 0)
    {
        number = number / 2;
    }
    else
    {
        number = (3 * number) + 1;
    }

    return number;
}

int main()
{
    
	std::cout << "Enter a number: ";
	int x = 0;
	std::cin >> x;

	while (x > 1)
    {
        x = calculate_next_collatzs_number(x);
        std::cout << x << "\n";

    }
    
    return 0;
}