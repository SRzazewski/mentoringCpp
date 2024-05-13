# Add an executable
add_executable(MENTORING_APP 
    main.cpp)


# add_executable(SFML_TEST src/main.cpp)
target_link_libraries(MENTORING_APP PRIVATE sfml-graphics)
target_compile_features(MENTORING_APP PRIVATE cxx_std_20)