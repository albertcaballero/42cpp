#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Only 1 argument accepted\n";
		return;
	}

	std::string file(argv[1]);
	
}