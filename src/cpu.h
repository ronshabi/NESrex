#ifndef NESREX_CPU_H
#define NESREX_CPU_H

#include <array>
#include <cstdint>

class cpu {
  public:
    uint8_t x = 0;
    uint8_t y = 0;
    uint8_t a = 0;

    bool n = false; // negative
    bool v = false; // overflow
    bool b = false; // break
    bool d = false; // bcd/decimal
    bool i = false; // interrupt
    bool z = false; // zero
    bool c = false; // carry

    cpu();

    void execute(uint8_t opcode);

  private:
    uint16_t                    m_pc = 0;
    uint16_t                    m_sp = 0;
    std::array<uint8_t, 0xffff> m_memory;

    inline uint8_t  getImmediateByte();
    inline uint16_t getImmediateWord();

    inline uint8_t deref(uint16_t address);
    inline uint8_t derefImmediateByte();
    inline uint8_t derefZeroPage();
    inline uint8_t derefZeroPageX();
    inline void    setFlag(bool &flag, bool to);
};

#endif
