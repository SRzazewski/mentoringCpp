# Add an executable
add_executable(CALCULATOR_APP 
    main.cpp)

target_link_libraries(CALCULATOR_APP 
    PRIVATE
        CALCULATOR_APP::CAL_DISPLAY
        CALCULATOR_APP::CALCULATOR_CLASS)