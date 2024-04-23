# Add an executable
add_executable(ARRAY_MULTIPLICATION_TALBE_APP 
    array_multiplication_table.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(ARRAY_MULTIPLICATION_TALBE_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)