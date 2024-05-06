add_library(CALCULATOR_CLASS STATIC
    calculator.cpp
)

target_link_libraries(CALCULATOR_CLASS 
    PRIVATE
        CALCULATOR_APP::CAL_DISPLAY)

add_library(CALCULATOR_APP::CALCULATOR_CLASS ALIAS CALCULATOR_CLASS)

target_include_directories(CALCULATOR_CLASS 
    INTERFACE 
        ${CMAKE_CURRENT_LIST_DIR}
)