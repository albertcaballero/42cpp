#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv){
	std::cout << std::fixed << std::setprecision(2);
	if (argc != 2){
		std::cout << "Only 1 argument accepted\n";
		return -1;
	} 
	(void) argv;
	try{
		BitcoinExchange ex("data.csv");
		parseInput(argv[1]);
		// ex.exchange(argv[1]); //hace lo mismo que parseInput
	} catch(std::exception &e){
		std::cout << e.what() <<std::endl;
	}
	return 0;
}