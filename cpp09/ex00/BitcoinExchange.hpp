#ifndef BITCOIN_H_
#define BITCOIN_H_

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange{
private:
	std::map<std::string, float> _rates;
public:
	BitcoinExchange();
	BitcoinExchange(std::string);
	~BitcoinExchange();

	float getValue(std::string);
	std::pair<std::string, float> parseLine(std::string)
};

#endif