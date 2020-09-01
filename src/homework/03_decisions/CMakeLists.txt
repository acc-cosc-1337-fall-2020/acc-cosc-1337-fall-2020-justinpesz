cmake_minimum_required (VERSION 3.8)
project(hw_03_library)

add_library(hw_03_library "decisions.cpp" "decisions.h")
add_executable(hw_03_exe "main.cpp" "decisions.cpp")

