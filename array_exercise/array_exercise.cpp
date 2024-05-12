#include <iostream>

template <typename T, int N>
constexpr int size(const T (&)[N]) noexcept
{
	return N;
}

void copy(const int* input, int* output, int size)
{
    for(int i = 0; i < size; ++i)
    {
        output[i] = input[i];
    }
}

void reverse(int* arr, int size)
{
    for(int i = 0; i < (size/2); ++i)
    {
        // int copy = arr[i];
        // arr[i] = arr[size - i - 1];
        // arr[size - i - 1] = copy;
        std::swap(arr[i], arr[size - 1 - i]);
    }
}

bool compare(const int* lhs_arr, int lhs_size, const int* rhs_arr, int rhs_size)
{
    if (lhs_size != rhs_size)
    {
        return false;
    }

    for(int i = 0; i < lhs_size; ++i)
    {
        if(lhs_arr[i] != rhs_arr[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
	int arr1[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
	constexpr int sz = size(arr1);
	int arr2[sz] = {};

	copy(arr1, arr2, sz);
	reverse(arr2, sz);
	reverse(arr2, sz);
	std::cout << std::boolalpha << compare(arr1, sz, arr2, sz) << "\n";
}