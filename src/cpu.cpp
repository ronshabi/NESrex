#include "cpu.h"
#include "instructions.h"

cpu::cpu()
{
    std::cout << "cpu created" << std::endl;

    // FIXME: remove me
    m_memory[0x0001] = 0x0f;
    a = 0xe0;
}

void cpu::setFlag(bool& flag, bool to)
{
    flag = to;
}

u8 cpu::deref(u16 address)
{
    return m_memory[address];
}

u8 cpu::immediateByte()
{
    return m_memory[m_pc+1];
}

u16 cpu::immediateWord()
{
    return m_memory[m_pc+1] >> 8 | m_memory[m_pc+2];
}

u8 cpu::derefImmediateByte()
{
    return deref(immediateByte());
}

u8 cpu::derefZeroPage()
{
    return derefImmediateByte();
}

u8 cpu::derefZeroPageX()
{
    u8 index = x+immediateByte();
    return deref(index);
}
u16 cpu::derefAbsoluteX()
{
    u16 index = y+immediateByte();
    return deref(index);
}

u16 cpu::derefAbsoluteY()
{
    u16 index = y+immediateByte();
    return deref(index);
}

u8 cpu::derefIndirectX()
{
    u8 index = x+immediateByte();
    return deref(index);
}

u8 cpu::derefIndirectY()
{
    u16 index = y+immediateByte();
    return deref(index);
}

void cpu::execute(u8 opcode)
{
    switch (opcode) {
    case instructions::AND_IMM.opcode:a &= immediateByte();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_ZPG.opcode:a &= derefZeroPage();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_ZPX.opcode:a &= derefZeroPageX();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_ABS.opcode:a &= immediateWord();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_ABX.opcode: a &= derefAbsoluteX();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_ABY.opcode: a &= derefAbsoluteY();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_IDX.opcode:a &= derefIndirectX();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::AND_IDY.opcode:a &= derefIndirectY();
        setFlag(z, !a);
        setFlag(n, a >> 8);
        break;
    case instructions::TYA.opcode:
        a = y;
        setFlag(z, !a);
        setFlag(n, a >> 8);

    default:std::cout << "idk!" << std::endl;
    }
}
