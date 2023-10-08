cmake_minimum_required(VERSION 3.26)
project(c_plusplus_knu)

set(CMAKE_CXX_STANDARD 14)

include_directories(lab_01/task_01)

add_executable(c_plusplus_knu
        lab_01/task_01/task_01.cpp
        lab_01/task_02/task_02.cpp
        lab_01/task_03/task_03.cpp
        lab_01/task_04/task_04.cpp
        lab_01/task_05/task_05.cpp
        lab_02/task_01/task_01.cpp
        lab_02/task_02/task_02.cpp
        lab_02/task_03/task_03.cpp
        lab_02/task_04/task_04.cpp
        lab_02/task_05/task_05.cpp
)
