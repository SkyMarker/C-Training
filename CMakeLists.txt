cmake_minimum_required(VERSION 3.24)
project(C_Training)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(C-Training)



add_executable(Day1 C-Training/Day1.cpp C-Training/Day7.cpp C-Training/Day8.cpp)
add_executable(Day2 C-Training/Day2.cpp)
add_executable(Day3 C-Training/Day3.cpp)
add_executable(Day4 C-Training/Day4.cpp)
add_executable(Day5 C-Training/Day5.cpp)
add_executable(Day6 C-Training/Day6.cpp)