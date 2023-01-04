#include <iostream>
#include "my_kbd.h"
#include "my_ram.h"

void input() {
	for (int i = 0; i < 8; i++) {
		int num;
		std::cout << "Input Num #" << i << ":";
		std::cin >> num;
		write(i, num);
	}
}