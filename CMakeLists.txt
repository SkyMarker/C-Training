cmake_minimum_required(VERSION 3.24)
project(C_Training)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(C-Training)

add_executable(C_Training
        C-Training/C-Training.cpp
        C-Training/Day1.cpp
        C-Training/Day2.cpp
        C-Training/Day3.cpp)
