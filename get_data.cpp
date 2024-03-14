//get_data.cpp
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <netinet/in.h>
#include "get_data.h"

uint32_t get_data(char *source) {
	uint8_t network_buffer[4];
	uint32_t *p;
	uint32_t n;
	FILE *fp = fopen(source, "r");

	if(fp) {
		fseek(fp, 0, SEEK_END);

		if(ftell(fp) != 4) {
			printf("File's data is not 4-byte value\n");
			fclose(fp);
			exit(0);
		}
		fseek(fp, 0, SEEK_SET);
		fread(network_buffer, 1, 4, fp);
		p = reinterpret_cast<uint32_t*>(network_buffer);
		n = ntohl(*p);
	}
	else {
		printf("Can't open file\n");
		exit(0);
	}
	fclose(fp);
	return n;
}
