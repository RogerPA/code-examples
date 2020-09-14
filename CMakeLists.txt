project("Code Examples")

cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories($(CMAKE_CURRENT_SOURCE_DIR)/source)

add_executable(output_stream source/output_stream.cpp)
add_executable(input_stream source/input_stream.cpp)
add_executable(c_sort source/c_sort.cpp)
add_executable(c++_sort source/c++_sort.cpp)
add_executable(stl source/stl.cpp)
add_executable(counting_int source/counting_int.cpp)
add_executable(counting_int_fun source/counting_int_fun.cpp)
add_executable(more_examples source/more_examples.cpp)
