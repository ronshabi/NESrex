#include "cpu.h"
#include "instructions.h"
#include <iostream>

cpu::cpu() {
    std::cout << "cpu created" << std::endl;

    // FIXME: remove me
    m_memory[0x0001] = 0x0f;
    a = 0xe0;
}

void cpu::setFlag(bool &flag, bool to) { flag = to; }

uint8_t cpu::deref(uint16_t address) { return m_memory[address]; }

uint8_t cpu::getImmediateByte() { return m_memory[m_pc + 1]; }

uint16_t cpu::getImmediateWord() {
    return m_memory[m_pc + 1] >> 8 | m_memory[m_pc + 2];
}

uint8_t cpu::derefImmediateByte() { return deref(getImmediateByte()); }

uint8_t cpu::derefZeroPage() { derefImmediateByte(); }

uint8_t cpu::derefZeroPageX() {
    uint8_t index = x + getImmediateByte();
    if (getImmediateByte() <= 0xff && getImmediateByte() >= 0) {
        deref(index);
    }
}

void cpu::execute(uint8_t opcode) {
    switch (opcode) {
    case instructions::AND_IMM.opcode:
        a &= getImmediateByte();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_ZPG.opcode:
        a &= derefZeroPage();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_ZPX.opcode:
        a &= derefZeroPageX();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_ABS.opcode:
        a &= getImmediateWord();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;

    default:
        std::cout << "idk!" << std::endl;
    }
}
