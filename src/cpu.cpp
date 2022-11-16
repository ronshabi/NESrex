#include "cpu.h"
#include "instructions.h"
#include <iostream>

cpu::cpu() {
	std::cout << "cpu created" << std::endl;

	// FIXME: remove me
	m_memory[0x0001] = 0x0f;
	a = 0xe5;
}

uint8_t cpu::getImmediate() {
	return m_memory[m_pc+1];
}

void cpu::execute(uint8_t opcode)
{
	switch (opcode)
	{
	case instructions::AND_IMM.opcode:
		a &= getImmediate();

		break;
	default:
		std::cout << "idk!" << std::endl;
	}
}
