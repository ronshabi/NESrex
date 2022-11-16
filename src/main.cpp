#include <iostream>
#include <cstdio>

#include "cpu.h"
int main()
{
	cpu c;
	c.execute(0x29);
	printf("A is: 0x%02x", c.a);
	return 0;
}
