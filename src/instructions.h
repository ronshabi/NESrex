#ifndef NES_INSTRUCTIONS_H
#define NES_INSTRUCTIONS_H

#include "instruction.h"

namespace instructions {
	constexpr instruction AND_IMM = instruction (0x29, 2, 2, "AND");
};

#endif //NES_INSTRUCTIONS_H
