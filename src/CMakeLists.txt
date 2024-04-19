# Add an executable
add_executable(MENTORING_APP 
    main.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(MENTORING_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)