cmake_minimum_required(VERSION 3.23)
project(nes)

set(CMAKE_CXX_STANDARD 14)

add_executable(nes src/main.cpp src/cpu.cpp src/cpu.h src/mmu.cpp src/mmu.h src/instruction.h src/instructions.cpp src/instructions.h)
