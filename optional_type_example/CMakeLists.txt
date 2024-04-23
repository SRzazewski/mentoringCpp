# Add an executable
add_executable(OPTIONAL_TYPE_EXAMPLE_APP 
    optional_type_example.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(OPTIONAL_TYPE_EXAMPLE_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)