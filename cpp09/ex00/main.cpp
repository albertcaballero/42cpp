#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv){
	std::cout << std::fixed << std::setprecision(2);
	if (argc != 2){
		std::cout << "Only 1 argument accepted\n";
		return -1;
	} 
	try{
		BitcoinExchange ex("data.csv");
		ex.exchange(argv[1]);
	} catch(std::exception &e){
		std::cout << e.what() <<std::endl;
	}
	return 0;
}