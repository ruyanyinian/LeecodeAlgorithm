cmake_minimum_required(VERSION 3.10)
project(leetCodeAlgorithm "CXX")
set(CMAKE_CXX_STANDARD 11)
include_directories(Array/Easy/35.SearchInsertPosition)
add_subdirectory(Array/Easy/35.SearchInsertPosition)
add_executable(main main.cpp)
target_link_libraries(main Search)


