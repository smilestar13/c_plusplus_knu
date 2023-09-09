cmake_minimum_required(VERSION 3.26)
project(c_plusplus_knu)

set(CMAKE_CXX_STANDARD 14)

include_directories(lab_01/task_01)

add_executable(c_plusplus_knu
        lab_01/task_01/main.cpp
        lab_01/task_01/main.h)
