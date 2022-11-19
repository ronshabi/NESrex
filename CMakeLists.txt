cmake_minimum_required(VERSION 3.23)
project(nesrex)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        nesrex
        src/main.cpp
        src/cpu.cpp
        src/cpu.h
        src/instruction.h
        src/instructions.h
        src/ines.cpp
        src/ines.h
        src/defs.h)
