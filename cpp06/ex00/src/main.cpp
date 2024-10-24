#include "ScalarConverter.hpp"

void printNumbers(){
	std::cout << "char: " << "" << std::endl;
	std::cout << "int: " << "" << std::endl;
	std::cout << "float: " << "" << std::endl;
	std::cout << "double: " << "" << std::endl;
}


int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "NO ARGUMENTS PROVIDED" <<std::endl;
		return -1;
	}
	std::string str(argv[1]);
	ScalarConverter::convert(str);
	printNumbers();
	return 0;
}
