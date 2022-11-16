#ifndef CPU_H
#define CPU_H

#include <cstdint>
#include <array>
#include "instruction.h"

class cpu {
public:
	uint8_t x = 0;
	uint8_t y = 0;
	uint8_t a = 0;

	bool n = false; // negative
	bool v = false;	// overflow
	bool b = false; // break
	bool d = false;	// bcd/decimal
	bool i = false; // interrupt
	bool z = false; // zero
	bool c = false; // carry

	cpu();

	void execute(uint8_t opcode);
private:
	uint8_t getImmediate();
	uint16_t m_pc = 0;
	uint16_t m_sp = 0;
	std::array<uint8_t, 0xffff> m_memory;
};

#endif
