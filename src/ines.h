#ifndef NESREX_INES_H
#define NESREX_INES_H

#include <fstream>
#include <iostream>
#include <array>
#include <vector>

class ines {
public:
    ines(std::string path);
    ~ines();

private:
    std::string m_path;
    std::fstream m_file;
    int m_size = -1;

    bool validate();
    std::vector<uint8_t> read(int offset, int size);
};

#endif //NESREX_INES_H
