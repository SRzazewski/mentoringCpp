enable_testing()

add_executable(hello_test
    cal_class_test.cpp
)
target_link_libraries(hello_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)