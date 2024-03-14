//main.cpp
#include <stdio.h>
#include <stdint.h>
#include "get_data.h"

int main(int agrc, char* argv[]) {
	uint32_t n1;
	uint32_t n2;
	uint32_t n3;

	n1 = get_data(argv[1]);
	n2 = get_data(argv[2]);
	n3 = n1 + n2;
	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)", n1, n1, n2, n2, n3, n3);
	return 0;
}
