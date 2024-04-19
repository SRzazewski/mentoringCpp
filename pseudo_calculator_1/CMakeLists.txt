# Add an executable
add_executable(PSEUDO_CALCULATOR_APP 
    pseudo_calculator_1.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(PSEUDO_CALCULATOR_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)