# Add an executable
add_executable(COLLATZ_CONJECTURE_APP 
    collatz_conjecture.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(COLLATZ_CONJECTURE_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)