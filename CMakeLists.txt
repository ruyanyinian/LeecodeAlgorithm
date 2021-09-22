cmake_minimum_required(VERSION 3.10)
project(leetCodeAlgorithm "CXX")
set(CMAKE_CXX_STANDARD 11)
include_directories(Array/Easy/88.MergedSortedArray)
add_subdirectory(Array/Easy/88.MergedSortedArray)
add_executable(main main.cpp)
target_link_libraries(main merge)


