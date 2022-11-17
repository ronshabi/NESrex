#ifndef NESREX_INSTRUCTIONS_H
#define NESREX_INSTRUCTIONS_H

#include "instruction.h"

namespace instructions {
constexpr instruction AND_IMM = instruction(0x29, 2, 2, "AND");
constexpr instruction AND_ZPG = instruction(0x25, 2, 3, "AND");
constexpr instruction AND_ZPX = instruction(0x35, 2, 4, "AND");
constexpr instruction AND_ABS = instruction(0x2d, 3, 4, "AND");
constexpr instruction AND_ABX = instruction(0x3d, 3, 4, "AND");
constexpr instruction AND_ABY = instruction(0x39, 3, 4, "AND");
constexpr instruction AND_IDX = instruction(0x21, 2, 6, "AND");
constexpr instruction AND_IDY = instruction(0x31, 2, 5, "AND");
};

#endif //NESREX_INSTRUCTIONS_H
