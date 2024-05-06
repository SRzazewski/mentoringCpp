add_library(CAL_DISPLAY STATIC
    cal_display.cpp
)
add_library(CALCULATOR_APP::CAL_DISPLAY ALIAS CAL_DISPLAY)

target_include_directories(CAL_DISPLAY 
    INTERFACE 
        ${CMAKE_CURRENT_LIST_DIR}
)