#ifndef NESREX_INSTRUCTIONS_H
#define NESREX_INSTRUCTIONS_H

#include "defs.h"
#include "instruction.h"

namespace instructions {
constexpr instruction BRK     = {0x00, 1, 7, "BRK"};
constexpr instruction ORA_IZX = {0x01, 1, 7, "ORA"};
constexpr instruction ORA_IZY = {0x11, 1, 5, "ORA"};
constexpr instruction ORA_ZP  = {0x05, 1, 3, "ORA"};
constexpr instruction ORA_ZPX = {0x15, 1, 4, "ORA"};
constexpr instruction ORA_IMM = {0x09, 1, 2, "ORA"};
constexpr instruction ORA_ABY = {0x19, 1, 4, "ORA"};
constexpr instruction ORA_ABS = {0x0D, 1, 4, "ORA"};
constexpr instruction ORA_ABX = {0x1D, 1, 4, "ORA"};

constexpr instruction AND_IMM{0x29, 2, 2, "AND"};
constexpr instruction AND_ZPG{0x25, 2, 3, "AND"};
constexpr instruction AND_ZPX{0x35, 2, 4, "AND"};
constexpr instruction AND_ABS{0x2d, 3, 4, "AND"};
constexpr instruction AND_ABX{0x3d, 3, 4, "AND"};
constexpr instruction AND_ABY{0x39, 3, 4, "AND"};
constexpr instruction AND_IDX{0x21, 2, 6, "AND"};
constexpr instruction AND_IDY{0x31, 2, 5, "AND"};
constexpr instruction TYA{0x98, 1, 2, "TYA"};

}; // namespace instructions

#endif // NESREX_INSTRUCTIONS_H
