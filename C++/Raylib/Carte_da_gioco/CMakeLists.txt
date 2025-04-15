cmake_minimum_required(VERSION 3.5)
project(raylib_prova)

set(CMAKE_CXX_STANDARD 20)

add_executable(raylib_prova main.cpp)

find_library(RAYLIBRARY raylib lib)

target_link_libraries(raylib_prova LINK_PUBLIC ${RAYLIBRARY} winmm)