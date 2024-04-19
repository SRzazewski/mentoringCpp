# Add an executable
add_executable(COLLATZ_CONJECTURE_2_APP 
    collatz_conjecture_2.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(COLLATZ_CONJECTURE_2_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)