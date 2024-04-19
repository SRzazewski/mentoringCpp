# Add an executable
add_executable(FOR_EXERCISE_APP 
    for_exercise.cpp)

# LTO(link-time optimization) is disabled
set_target_properties(FOR_EXERCISE_APP PROPERTIES INTERPROCEDURAL_OPTIMIZATION FALSE)

