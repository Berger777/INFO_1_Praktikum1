# cmake_minimum_required(VERSION <specify CMake version here>)
project(Quadratwurzel C)

set(CMAKE_C_STANDARD 11)

add_executable(Quadratwurzel main.c)
target_link_libraries(Quadratwurzel m)