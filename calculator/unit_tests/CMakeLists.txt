include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

if(WIN32)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(cal_class_unit_tests
    cal_class_test.cpp
)

target_link_libraries(cal_class_unit_tests
    PRIVATE
        GTest::gtest_main
        CALCULATOR_APP::CALCULATOR_CLASS
)

target_include_directories(cal_class_unit_tests
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)

include(GoogleTest)
gtest_discover_tests(cal_class_unit_tests)