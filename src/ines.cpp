#include "ines.h"

// FIXME: remove me and all of my instances
#define Log(msg) std::cout << msg << std::endl;

ines::ines(std::string path)
        :m_path{path}
{
    // open the file
    m_file.open(m_path, std::ios::binary | std::ios::in | std::ios::out);

    if (m_file.is_open()) {
        // determine size of file in bytes
        m_file.seekg(0, std::ios::end);
        m_size = m_file.tellg();

        // get to the start
        m_file.seekg(0, std::ios::beg);


        // FIXME: unsafe, remove when implementing r/w from file
        char buffer[100];
        (m_file.read(buffer, 100));




        // close the file
        m_file.close();
    }
    else {
        // FIXME: add an exception to file not being able to open
        // for now...
        Log("Error opening the file, does it exist?");
    }

}