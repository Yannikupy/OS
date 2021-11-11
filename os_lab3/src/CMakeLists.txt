cmake_minimum_required(VERSION 3.16)
project(lab_3_C_version_ C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")
add_executable(os_lab3 main.c)
