cmake_minimum_required(VERSION 3.10)
project(leetCodeAlgorithm "CXX")
set(CMAKE_CXX_STANDARD 11)

add_library(remove_lib 
    SHARED 
    Array/Easy/1.TwoSum/TwoSum.cpp
    Array/Array.cpp)

target_include_directories(remove_lib 
    PUBLIC 
    ${PROJECT_SOURCE_DIR}/include)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE remove_lib)                  


