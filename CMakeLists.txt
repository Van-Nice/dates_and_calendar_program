cmake_minimum_required(VERSION 3.25)
project(dates_and_calendar_program)

set(CMAKE_CXX_STANDARD 14)

add_executable(dates_and_calendar_program
        main.cpp dateType.cpp dateType.h)
