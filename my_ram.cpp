#include "my_ram.h"

int buffer[8];

void write(int& iterator, int& num) {
	buffer[iterator] = num;
}

int read(int& iterator) {
	return buffer[iterator];
}