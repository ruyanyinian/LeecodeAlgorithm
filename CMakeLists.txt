cmake_minimum_required(VERSION 3.10)
project(leetCodeAlgorithm "CXX")
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Array/medium/11.ContainWithMostWater)
target_include_directories(
    ContainWithMostWater
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
add_executable(main main.cpp)
target_link_libraries(main ContainWithMostWater)

