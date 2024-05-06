#ifndef CAL_DISPLAY_HPP
#define CAL_DISPLAY_HPP

#include <iostream>

class cal_display
{
public:
    std::string get_welcome_msg();

private:
    const std::string welcome_msg = "Welcome to the Calculator\n";
    const std::string operation_list_head_msg = "Possible operation:\n";
    const std::string operation_list_adding_msg = "\"+\" - adding\n";
    const std::string operation_list_subtraction_msg = "\"-\" - subtraction\n";
    const std::string operation_list_multiplication_msg = "\"*\" - multiplication\n";
    const std::string operation_list_division_msg = "\"-\" - division\n";
    const std::string select_operation_msg = "\nSelect operation:\n";
    const std::string selected_adding_operation_msg = "Operation selected: a + b\n";
    const std::string selected_subtraction_operation_msg = "Operation selected: a - b\n";
    const std::string selected_multiplication_operation_msg = "Operation selected: a * b\n";
    const std::string selected_division_operation_msg = "Operation selected: a / b\n";
    const std::string enter_number_a_msg = "\nEnter number a:";
    const std::string enter_number_b_msg = "\nEnter number b:";
    const std::string adding_result_msg = "\na + b = ";
    const std::string subtraction_result_msg = "\na - b = ";
    const std::string multiplication_result_msg = "\na * b = ";
    const std::string division_result_msg = "\na / b = ";
    const std::string wrong_enter_vaule_division_msg = "b can not be equal 0!!\nEnter other value for b:";
    const std::string _msg = "";
};

#endif