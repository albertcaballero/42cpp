#include "RPN.hpp"

int main(int argc, char** argv){
	if (argc != 2){
		std::cout << "Error: please provide only 2 arguments" << std::endl;
		return -1;
	}
	try{
		doRPN(argv[1]);
	}catch(std::exception &e){
		std::cout << "Error: "<< e.what() <<std::endl;
	}
}

