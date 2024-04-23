#include <iostream>
#include <system_error>
#include <variant>
#include <limits>

std::variant<int, std::errc> safe_divide(int x, int y)
{
	if (y == 0)
		return std::errc::invalid_argument;

	if (x == std::numeric_limits<int>::min() && y == -1)
		return std::errc::result_out_of_range;

	return x / y;
}

int main()
{
    int x1 = 0;
    int x2 = 0;
    int operation = 0;
	std::cout << "Put 1st number:";
    std::cin >> x1;
	std::cout << "Put 2nd number:";
    std::cin >> x2;

	std::variant<int, std::errc> result = safe_divide(x1, x2);
	if (std::holds_alternative<int>(result))
	{
		std::cout << x1 << " / " << x2 << " = " << std::get<int>(result);
	}
	else
	{
		// std::cout << std::error_code(std::get<std::errc>(result)).message() << "\n";
		std::cout << "Error\n";
	}
}