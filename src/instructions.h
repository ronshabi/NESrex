#ifndef NESREX_INSTRUCTIONS_H
#define NESREX_INSTRUCTIONS_H

#include "defs.h"
#include "instruction.h"


namespace instructions {
#define INST constexpr instruction

/*
 * Logical and arithmetic
 */

INST BRK     = {0x00, 1, 7, "BRK"};
INST ORA_IZX = {0x01, 1, 7, "ORA"};
INST ORA_IZY = {0x11, 1, 5, "ORA"};
INST ORA_ZP  = {0x05, 1, 3, "ORA"};
INST ORA_ZPX = {0x15, 1, 4, "ORA"};
INST ORA_IMM = {0x09, 1, 2, "ORA"};
INST ORA_ABY = {0x19, 1, 4, "ORA"};
INST ORA_ABS = {0x0D, 1, 4, "ORA"};
INST ORA_ABX = {0x1D, 1, 4, "ORA"};

INST AND_IMM = {0x29, 1, 4, "AND"};
INST AND_ZP  = {0x25, 1, 4, "AND"};
INST AND_ZPX = {0x35, 1, 4, "AND"};
INST AND_IZX = {0x21, 1, 4, "AND"};
INST AND_IZY = {0x31, 1, 4, "AND"};
INST AND_ABS = {0x2D, 1, 4, "AND"};
INST AND_ABX = {0x3D, 1, 4, "AND"};
INST AND_ABY = {0x39, 1, 4, "AND"};

INST EOR_IMM = {0x49, 1, 4, "EOR"};
INST EOR_ZP  = {0x45, 1, 4, "EOR"};
INST EOR_ZPX = {0x55, 1, 4, "EOR"};
INST EOR_IZX = {0x41, 1, 4, "EOR"};
INST EOR_IZY = {0x51, 1, 4, "EOR"};
INST EOR_ABS = {0x4D, 1, 4, "EOR"};
INST EOR_ABX = {0x5D, 1, 4, "EOR"};
INST EOR_ABY = {0x59, 1, 4, "EOR"};

INST ADC_IMM = {0x69, 1, 4, "ADC"};
INST ADC_ZP  = {0x65, 1, 4, "ADC"};
INST ADC_ZPX = {0x75, 1, 4, "ADC"};
INST ADC_IZX = {0x61, 1, 4, "ADC"};
INST ADC_IZY = {0x71, 1, 4, "ADC"};
INST ADC_ABS = {0x6D, 1, 4, "ADC"};
INST ADC_ABX = {0x7D, 1, 4, "ADC"};
INST ADC_ABY = {0x79, 1, 4, "ADC"};

INST SBC_IMM = {0xE9, 1, 4, "SBC"};
INST SBC_ZP  = {0xE5, 1, 4, "SBC"};
INST SBC_ZPX = {0xF5, 1, 4, "SBC"};
INST SBC_IZX = {0xE1, 1, 4, "SBC"};
INST SBC_IZY = {0xF1, 1, 4, "SBC"};
INST SBC_ABS = {0xED, 1, 4, "SBC"};
INST SBC_ABX = {0xFD, 1, 4, "SBC"};
INST SBC_ABY = {0xF9, 1, 4, "SBC"};

INST CMP_IMM = {0xC9, 1, 4, "CMP"};
INST CMP_ZP  = {0xC5, 1, 4, "CMP"};
INST CMP_ZPX = {0xD5, 1, 4, "CMP"};
INST CMP_IZX = {0xC1, 1, 4, "CMP"};
INST CMP_IZY = {0xD1, 1, 4, "CMP"};
INST CMP_ABS = {0xCD, 1, 4, "CMP"};
INST CMP_ABX = {0xDD, 1, 4, "CMP"};
INST CMP_ABY = {0xD9, 1, 4, "CMP"};

INST CPX_IMM = {0xE0, 1, 4, "CPX"};
INST CPX_ZP  = {0xE4, 1, 4, "CPX"};
INST CPX_ABS = {0xEC, 1, 4, "CPX"};

INST CPY_IMM = {0xC0, 1, 4, "CPY"};
INST CPY_ZP  = {0xC4, 1, 4, "CPY"};
INST CPY_ABS = {0xCC, 1, 4, "CPY"};

INST DEC_ZP  = {0xC6, 1, 4, "DEC"};
INST DEC_ZPX = {0xD6, 1, 4, "DEC"};
INST DEC_ABS = {0xCE, 1, 4, "DEC"};
INST DEC_ABX = {0xDE, 1, 4, "DEC"};

INST DEX_IMP = {0xCA, 1, 1, "DEX"};
INST DEY_IMP = {0xD6, 1, 1, "DEY"};


INST DEC_ABX = {0xDE, 1, 4, "DEC"};

INST TYA{0x98, 1, 2, "TYA"};

}; // namespace instructions

#endif // NESREX_INSTRUCTIONS_H
