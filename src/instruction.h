#ifndef NESREX_INSTRUCTION_H
#define NESREX_INSTRUCTION_H

#include <string>
#include "defs.h"

struct instruction {
  const u8 opcode;
  const u8 bytes;
  const u8 cycles;
  const char* name;

  constexpr instruction(u8 p_opcode, u8 p_bytes, u8 p_cycles,
          const char* p_name)
          :opcode{p_opcode}, bytes{p_bytes}, cycles{p_cycles}, name{p_name} { };
};

#endif // NESREX_INSTRUCTION_H
