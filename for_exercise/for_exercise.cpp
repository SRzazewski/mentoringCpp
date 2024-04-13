#include <iostream>
#include <iomanip>

int main()
{
	for (int j = 1; j <= 10; ++j)
	{
		for (int i = 0; i <= 9; ++i)
			std::cout << std::setw(2) << ((10 * (j - 1))) + i << " ";

		std::cout << "\n";
	}

	for (int j = 1; j <= 5; ++j)
	{
		for (int i = 1; i <= 5; ++i)
		{
			if (i >= (6 - j))
			{
				std::cout << i << " ";
			}
			else
			{
				std::cout << " " << " ";
			}
		}
		std::cout << "\n";
	}

	for (int j = 1; j <= 10; ++j)
	{
		for (int i = 1; i <= 10; ++i)
			std::cout << std::setw(2) << j * i << " ";

		std::cout << "\n";
	}
}