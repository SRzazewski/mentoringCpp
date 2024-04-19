# Add an executable
add_executable(ARRAY_EXERCISE_APP 
    array_exercise.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(ARRAY_EXERCISE_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)