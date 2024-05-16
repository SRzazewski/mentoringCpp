add_library(CALCULATOR_CLASS STATIC
    cal_class/calculator.cpp
)

target_include_directories(CALCULATOR_CLASS 
    INTERFACE 
        ${CMAKE_CURRENT_LIST_DIR}/cal_class
)

target_link_libraries(CALCULATOR_CLASS 
    PRIVATE
        CALCULATOR_APP::CAL_DISPLAY)

add_library(CAL_DISPLAY INTERFACE)
add_library(CALCULATOR_APP::CAL_DISPLAY ALIAS CAL_DISPLAY)

target_include_directories(CAL_DISPLAY 
    INTERFACE 
        ${CMAKE_CURRENT_LIST_DIR}/cal_display
)

add_library(CALCULATOR_APP::CALCULATOR_CLASS ALIAS CALCULATOR_CLASS)

add_executable(CALCULATOR_APP 
    calculator_main/main.cpp)

target_link_libraries(CALCULATOR_APP 
    PRIVATE
        CALCULATOR_APP::CAL_DISPLAY
        CALCULATOR_APP::CALCULATOR_CLASS)