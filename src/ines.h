#ifndef NESREX_INES_H
#define NESREX_INES_H

#include <fstream>
#include <iostream>


class ines {
public:
    ines(std::string path);

private:
    std::string m_path;
    std::fstream m_file;
    int m_size;
};

#endif //NESREX_INES_H
