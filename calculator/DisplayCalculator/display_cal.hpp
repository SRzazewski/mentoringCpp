#ifndef DISPLAY_CAL_HPP 
#define DISPLAY_CAL_HPP 

#include <iostream>
#include <vector>

class display_cal
{
public:
    std::string get_welcome_msg();

private:
    const std::string welcome_msg = "Welcome to the Calculator\n";

    const std::string operations_header_msg = "\nPossible operation:\n";
    const std::vector<std::string> operations_lists_msg = {"\"+\" - adding\n", 
                                                        "\"-\" - subtraction\n",
                                                        "\"*\" - multiplication\n",
                                                        "\"-\" - division\n"};

    const std::string operation_selected_msg = "Selected operation:\n";
    const std::string adding_selected_msg = "Selected operation: a + b\n";
    const std::string subtraction_selected_msg = "Selected operation: a - b\n";
    const std::string multiplication_selected_msg = "Selected operation: a * b\n";
    const std::string division_selected_msg = "Selected operation: a / b\n";

    const std::string enter_number_a_msg = "\nEnter value of number a:";
    const std::string enter_number_b_msg = "\nEnter value of number b:";
    const std::string wrong_value_of_b_msg = "\nb can not be equal 0!\nEnter other value for b:";

    const std::string adding_result_msg = "n\a + b = ";
    const std::string subtraction_result_msg = "n\a - b = ";
    const std::string multiplication_result_msg = "n\a * b = ";
    const std::string division_result_msg = "n\a / b = ";
    
};

#endif