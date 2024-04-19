# Add an executable
add_executable(DISPLAY_CPP_VER_APP 
display_cpp_ver.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(DISPLAY_CPP_VER_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)