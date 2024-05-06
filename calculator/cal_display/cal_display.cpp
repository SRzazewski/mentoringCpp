#include "cal_display.hpp"


cal_display::cal_display() {}
cal_display::~cal_display() {}

std::string cal_display::get_welcome_msg() const
{
    return this->welcome_msg;
}

std::string cal_display::get_operation_list_head_msg() const
{
    return this->operation_list_head_msg;
}

std::string cal_display::get_operation_list_adding_msg() const
{
    return this->operation_list_adding_msg;
}

std::string cal_display::get_operation_list_subtraction_msg() const
{
    return this->operation_list_subtraction_msg;
}

std::string cal_display::get_operation_list_multiplication_msg() const
{
    return this->operation_list_multiplication_msg;
}

std::string cal_display::get_operation_list_division_msg() const
{
    return this->operation_list_division_msg;
}

std::string cal_display::get_select_operation_msg() const
{
    return this->select_operation_msg;
}

std::string cal_display::get_selected_incorect_operation_msg() const
{
    return this->selected_incorect_operation_msg;
}

std::string cal_display::get_selected_adding_operation_msg() const
{
    return this->selected_adding_operation_msg;
}

std::string cal_display::get_selected_subtraction_operation_msg() const
{
    return this->selected_subtraction_operation_msg;
}

std::string cal_display::get_selected_multiplication_operation_msg() const
{
    return this->selected_multiplication_operation_msg;
}

std::string cal_display::get_selected_division_operation_msg() const
{
    return this->selected_division_operation_msg;
}

std::string cal_display::get_enter_number_a_msg() const
{
    return this->enter_number_a_msg;
}

std::string cal_display::get_enter_number_b_msg() const
{
    return this->enter_number_b_msg;
}

std::string cal_display::get_adding_result_msg() const
{
    return this->adding_result_msg;
}

std::string cal_display::get_subtraction_result_msg() const
{
    return this->subtraction_result_msg;
}

std::string cal_display::get_multiplication_result_msg() const
{
    return this->multiplication_result_msg;
}

std::string cal_display::get_division_result_msg() const
{
    return this->division_result_msg;
}

std::string cal_display::get_wrong_enter_vaule_division_msg() const
{
    return this->wrong_enter_vaule_division_msg;
}