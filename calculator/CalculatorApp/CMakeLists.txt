# Add an executable
add_executable(CALCULATOR_APP 
    calculator.cpp)

target_link_libraries(CALCULATOR_APP 
    PRIVATE 
        CALCULATOR_APP::DISPLAY_CAL
)