#ifndef NESREX_INES_H
#define NESREX_INES_H

#include <fstream>
#include <iostream>
#include <array>
#include <vector>
#include "cpu.h"

class ines {
public:
    ines(std::string path);
    ~ines();

private:
    std::string m_path;
    std::fstream m_file;
    bool m_valid = false;
    int m_size = -1;

    void validate();
    std::vector<u8> read(int offset, int size);
    u8 read(int offset);
};

#endif //NESREX_INES_H
