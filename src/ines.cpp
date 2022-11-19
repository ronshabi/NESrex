#include "ines.h"
#include "cpu.h"

// FIXME: remove me and all of my instances
#define Log(msg) std::cout << msg << std::endl;
// FIXME: replace me with an exception
#define TempException(msg) std::cerr << msg << std::endl
#define PrintHex(hex) printf("%02x ", hex)
ines::ines(std::string path)
        :m_path{path}
{
    // open the file
    m_file.open(m_path, std::ios::binary | std::ios::in | std::ios::out);

    if (m_file.is_open()) {
        // determine size of file in bytes
        m_file.seekg(0, std::ios::end);
        m_size = (int)m_file.tellg();

        validate();

        if (m_valid) {

        } else {
            TempException("File isn't valid");
        }

    }
    else {
        Log("Error opening the file, does it exist?");
    }
}

ines::~ines() {
    // close the file
    m_file.close();
}

// Read (endian neutral)
std::vector<u8> ines::read(int offset, int size) {
    // validate offset
    if (offset <= m_size && offset >= 0) {
        std::vector<u8> ret;
        char current[1];

        for (int i = 0; i < size; i++) {
            m_file.seekg(offset+i, std::ios::beg);
            m_file.read(current, 1);
            ret.insert(ret.cend(), *current);
        }

        return ret;
    } else {
        TempException("Wrong file offset chosen");
        return std::vector<u8> {0xff};
    }
}

u8 ines::read(int offset)
{
    if (offset <= m_size && offset >= 0) {
        char current[1];
        m_file.seekg(offset, std::ios::beg);
        m_file.read(current, 1);
        return *current;
    } else {
        TempException("Wrong file offset chosen");
        return -1;
    }
}


// This function validates the iNes File.
void ines::validate() {
    // Validate header
    std::vector<u8> header = read(0, 4);

    if (header == std::vector<u8>{0x4e, 0x45, 0x53, 0x1a}) {
        Log("valid");
        m_valid = true;
    }
}
