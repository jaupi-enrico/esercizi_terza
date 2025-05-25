cmake_minimum_required(VERSION 3.5)
project(blackjack)

set(CMAKE_CXX_STANDARD 20)

add_executable(blackjack main.cpp)

find_library(RAYLIBRARY raylib lib)

target_link_libraries(blackjack LINK_PUBLIC ${RAYLIBRARY} winmm)