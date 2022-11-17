#include <cstdio>
#include <iostream>

#include "cpu.h"
#include "ines.h"

int main() {
    cpu c;
    c.execute(0x29);
    printf("A is: 0x%02x\n", c.a);
    printf("Flag Z is: 0x%02x\n", c.z);
    printf("Flag N is: 0x%02x\n", c.n);

    ines mario("../roms/mario1.nes");


    return 0;
}
