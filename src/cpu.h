#ifndef NESREX_CPU_H
#define NESREX_CPU_H

#include <array>
#include <iostream>

#include "defs.h"

class cpu {
public:
    u8 x = 0;
    u8 y = 0;
    u8 a = 0;

    bool n = false; // negative
    bool v = false; // overflow
    bool b = false; // break
    bool d = false; // bcd/decimal
    bool i = false; // interrupt
    bool z = false; // zero
    bool c = false; // carry

    cpu();

    void execute(u8 opcode);

private:
    uint16_t m_pc = 0;
    uint16_t m_sp = 0;
    std::array<u8, 0xffff> m_memory;

    inline u8 getImmediateByte();
    inline uint16_t getImmediateWord();

    inline u8 deref(uint16_t address);
    inline u8 derefImmediateByte();
    inline u8 derefZeroPage();
    inline u8 derefZeroPageX();
    inline uint16_t derefAbsoluteX();
    inline uint16_t derefAbsoluteY();
    inline u8 derefIndirectX();
    inline u8 derefIndirectY();

    inline void setFlag(bool& flag, bool to);
};

#endif
