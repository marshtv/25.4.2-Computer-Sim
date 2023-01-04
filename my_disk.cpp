#include <fstream>
#include <iostream>
#include "my_disk.h"
#include "my_ram.h"

void save() {
	std::ofstream save_file("data.txt");
	for (int i = 0; i < 8; i++) {
		save_file << read(i) << std::endl;
	}
	save_file.close();
}

void load() {
	std::ifstream load_file("data.txt");
	if (load_file.is_open()) {
		for (int i = 0; i < 8; i++) {
			int num;
			load_file >> num;
			write(i,num);
		}
		load_file.close();
	} else
		std::cout << "Save file does not exist!!!" << std::endl;
}