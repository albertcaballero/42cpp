#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Only 1 argument accepted\n";
		return;
	}

	std::string file(argv[1]);
	
}


int check_float(std::string s){
    size_t i = 0;
	int p = 0;

    if (s[0] == '-' || s[0] == '+')
        i = 1;
    for (; i < s.length() - 1; ++i){
		if (s[i] != '.')
			p++;
        if (isdigit(s[i]) == 0 && s[i] != '.')
            return 0;
    }
	if (p > 1)
		return 0;
    return 1;
}

std::string parse_date(std::string line){
	line.find("-");
}