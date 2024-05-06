#include "cal_display.hpp"


cal_display::cal_display() {}
cal_display::~cal_display() {}

std::string cal_display::get_welcome_msg() const
{
    return welcome_msg;
}

std::string cal_display::get_operation_list_head_msg() const
{
    return operation_list_head_msg;
}

std::string cal_display::get_operation_list_adding_msg() const
{
    return operation_list_adding_msg;
}

std::string cal_display::get_operation_list_subtraction_msg() const
{
    return operation_list_subtraction_msg;
}

std::string cal_display::get_operation_list_multiplication_msg() const
{
    return operation_list_multiplication_msg;
}

std::string cal_display::get_operation_list_division_msg() const
{
    return operation_list_division_msg;
}

std::string cal_display::get_select_operation_msg() const
{
    return select_operation_msg;
}

std::string cal_display::get_selected_adding_operation_msg() const
{
    return selected_adding_operation_msg;
}

std::string cal_display::get_selected_subtraction_operation_msg() const
{
    return selected_subtraction_operation_msg;
}

std::string cal_display::get_selected_multiplication_operation_msg() const
{
    return selected_multiplication_operation_msg;
}

std::string cal_display::get_selected_division_operation_msg() const
{
    return selected_division_operation_msg;
}

std::string cal_display::get_enter_number_a_msg() const
{
    return enter_number_a_msg;
}

std::string cal_display::get_enter_number_b_msg() const
{
    return enter_number_b_msg;
}

std::string cal_display::get_adding_result_msg() const
{
    return adding_result_msg;
}

std::string cal_display::get_subtraction_result_msg() const
{
    return subtraction_result_msg;
}

std::string cal_display::get_multiplication_result_msg() const
{
    return multiplication_result_msg;
}

std::string cal_display::get_division_result_msg() const
{
    return division_result_msg;
}

std::string cal_display::get_wrong_enter_vaule_division_msg() const
{
    return wrong_enter_vaule_division_msg;
}