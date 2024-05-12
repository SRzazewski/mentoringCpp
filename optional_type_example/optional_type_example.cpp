#include <optional>
#include <limits>
#include <iostream>

std::optional<int> safe_divide(int x, int y)
{
    if (y == 0)
        return std::nullopt; // return {}; works too

    if (x == std::numeric_limits<int>::min() && y == -1)
        return std::nullopt; // return {}; works too

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

    std::optional<int> result = safe_divide(x1, x2);
    if (result)
    {
        std::cout << x1 << " / " << x2 << " = " << *result;
    }
    else
    {
        std::cout << "Error\n";
    }
}