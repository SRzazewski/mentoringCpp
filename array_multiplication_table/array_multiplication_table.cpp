#include <iostream>
#include <iomanip>

int index_2d_to_1d(int y, int x, int size_x)
{
	return size_x * y + x;
}

int main()
{
	constexpr int size_y = 10;
	constexpr int size_x = 10;
	constexpr int size_total = size_x * size_y;

	int arr[size_total] = {};
	int nested_arr[size_y][size_x] = {};

	for (int y = 0; y < size_y; y++)
    {
		for (int x = 0; x < size_x; x++)
        {
			arr[index_2d_to_1d(y, x, size_x)] = (y + 1) * (x + 1);
        }
    }

    std::cout << "Translated index:\n";
	for (int i = 0; i < size_total; ++i)
	{
		std::cout << std::setw(3) << arr[i] << " ";

		if (i % size_x == 9)
        {
			std::cout << "\n";
        }
	}

	for (int y = 0; y < size_y; y++)
    {
		for (int x = 0; x < size_x; x++)
        {
			nested_arr[y][x] = (y + 1) * (x + 1);;
        }
    }

    std::cout << "Nested arrays:\n";
	for (int y = 0; y < size_y; y++)
    {
		for (int x = 0; x < size_x; x++)
        {
			std::cout << std::setw(3) << nested_arr[y][x] << " ";
        }
        std::cout << "\n";
    }
}