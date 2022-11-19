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
    u8 m_16kbRomBanks;
    u8 m_8kbVRomMBanks;
    enum class m_mirroringMode { vertical, horizontal };
    bool m_batteryPackedRam;
    bool m_trainer;
    bool m_fourScreenVRamLayout;
    enum class m_mapperType {
      None = 0,
      Nintendo_MMC1 = 1,
      CNROM_Switch = 2,
      UNROM_Switch = 3,
      Nintendo_MMC3 = 4,
      Nintendo_MMC5 = 5,
      FFE_F4 = 6,
      AOROM_Switch = 7,
      FFE_F3 = 8,
      Nintendo_MMC2 = 9,
      Nintendo_MMC4 = 10,
      ColorDreams = 11,
      FFE_F6 = 12,
      CPROM_Switch = 13,
      HundredInOne_Switch = 15,
      Bandai = 16,
      FFE_F8 = 17,
      Jaleco_SS8806 = 18,
      Namcot_106 = 19,
      Nintendo_DiskSystem = 20,
      Konami_VRC4a = 21,
      Konami_VRC2a = 22,
      Konami_VRC2a_2 = 23,
      Konami_VRC6  = 24,
      Konami_VRC4b = 25,
      Irem_G101 = 32,
      Taito_TC0190_TC0350 = 33,
      Nina1 = 34,
      TengenRambo1 = 64,
      Irem_H3001 = 65,
      GNROM_Switch = 66,
      SunSoft3 = 67,
      SunSoft4 = 68,
      SunSoft5_FME7 = 69,
      Camerica = 71,
      Irem_74HC161_32 = 78,
      Nina3 = 79,
      Nina6 = 81,
      Pirate_HK_SF3 = 91,
    };
    bool m_vsSystemCartridges;
    u8 m_8kbRamBanks;
    enum class m_encodingSystem { PAL, NTSC };

    void validate();
    std::vector<u8> read(int offset, int size);
    u8 readByte(int offset);
};

#endif //NESREX_INES_H
