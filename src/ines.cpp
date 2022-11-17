#include "ines.h"

// FIXME: remove me and all of my instances
#define Log(msg) std::cout << msg << std::endl;

ines::ines(std::string path)
        :m_path{path}
{
    Log("iNes constructed @ " << path);

    // open the file
    m_file.open(m_path, std::ios::binary | std::ios::in | std::ios::out);

    if (m_file.is_open()) {
        Log("successfully opened the file");

        // close the file
        m_file.close();
        Log("closed the file")
    }
    else {
        // FIXME: add an exception to file not being able to open
    }

}