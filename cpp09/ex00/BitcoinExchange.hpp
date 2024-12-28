#ifndef BITCOIN_H_
#define BITCOIN_H_

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <cfloat>
#include <iomanip>

class BitcoinExchange{
private:
	std::map<std::string, double> _rates;
public:
	BitcoinExchange();
	BitcoinExchange(std::string);
	~BitcoinExchange();

	double getValue(std::string);
	std::pair<std::string, double> parseLine(std::string);
};

#endif