#include <iostream>
#include <string>
#include "my_cpu.h"
#include "my_disk.h"
#include "my_gpu.h"
#include "my_kbd.h"

void input_command(std::string& command) {
	std::cout << "command:";
	std::cin >> command;
	while (	command != "input" && command != "display" && command != "save" &&
			command != "load"  && command != "sum"     && command != "exit") {
		std::cout << "Input ERROR. Try again!" << std::endl;
		std::cout << "command:";
		std::cin >> command;
	}
}

int main() {
	std::string command;

	std::cout << "You have commands to operate this computer:" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "input . . . . for input from keyboard," << std::endl;
	std::cout << "display . . . for display in console," << std::endl;
	std::cout << "save  . . . . for save to file," << std::endl;
	std::cout << "load  . . . . for load from file," << std::endl;
	std::cout << "sum . . . . . for calculate the sum," << std::endl;
	std::cout << "exit  . . . . for exit from program." << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	input_command(command);
	while (command != "exit") {
		if (command == "input") {
			input();
		} else if (command == "display") {
			display();
		} else if (command == "save") {
			save();
		} else if (command == "load") {
			load();
		} else if (command == "sum") {
			compute();
		}

		input_command(command);
	}
	return 0;
}
