add_library(DISPLAY_CAL STATIC
    display_cal.cpp
)

add_library(CALCULATOR_APP::DISPLAY_CAL ALIAS DISPLAY_CAL)

# add_executable(DISPLAY_CALCULATOR display_cal.cpp)

target_include_directories(DISPLAY_CAL 
    INTERFACE 
        ${CMAKE_CURRENT_LIST_DIR}
)