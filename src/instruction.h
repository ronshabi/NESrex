#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <cstdint>
#include <string>

struct instruction {
  const uint8_t opcode;
  const uint8_t bytes;
  const uint8_t cycles;
  const char* name;

  constexpr instruction(uint8_t p_opcode, uint8_t p_bytes, uint8_t p_cycles, const char* p_name)
		  :
		  opcode{p_opcode}, bytes{p_bytes}, cycles{p_cycles}, name{p_name} { };
};

#endif //INSTRUCTION_H
