#include <iostream>
#include <stdio.h>

int main()
{    
    char cpp_ver[7];
    snprintf(cpp_ver, sizeof(cpp_ver)/sizeof(char), "%ld", __cplusplus);
    std::cout << "Hello from C++" << cpp_ver[2] << cpp_ver[3];
    std::cout << "\nHello from C++" << __cplusplus / 100 % 100;
}