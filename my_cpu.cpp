#include <iostream>
#include "my_cpu.h"
#include "my_ram.h"

void compute() {
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		sum += read(i);
	}
	std::cout << "Sum = " << sum << std::endl;
}