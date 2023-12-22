cmake_minimum_required(VERSION 3.10)
project(array)
include_directories(function_array)
add_subdirectory(function_array)
add_executable(array1 main.c)
target_link_libraries(array1 function_array)

set(file2 two)
include_directories(${file2})
add_subdirectory(${file2})
add_executable(head head.c)
target_link_libraries(head two_1)

