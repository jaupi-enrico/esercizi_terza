cmake_minimum_required(VERSION 3.5)
project(RaylibExample)

set(CMAKE_CXX_STANDARD 20)

# Percorsi per includere header e librerie
include_directories(include)
link_directories(lib)

# Definisci l'eseguibile
add_executable(RaylibExample main.cpp)

# Collega le librerie necessarie
target_link_libraries(RaylibExample raylib winmm)