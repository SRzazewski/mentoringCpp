cmake_minimum_required(VERSION 3.22)
project(MentoringProgram)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type (Release/Debug)" FORCE)
endif()

set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS_DEBUG "-g")

add_subdirectory(src)
add_subdirectory(pseudo_calculator_1)
add_subdirectory(pseudo_calculator_2)
add_subdirectory(collatz_conjecture)
add_subdirectory(for_exercise)