# Add an executable
add_executable(VARIANT_TYPE_EXAMPLE_APP 
    variant_type_example.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(VARIANT_TYPE_EXAMPLE_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)