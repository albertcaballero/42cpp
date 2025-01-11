#ifndef BITCOIN_H_
#define BITCOIN_H_

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <cfloat>
#include <iomanip>

#define MAXVAL 100000
#define MINVAL 0

class BitcoinExchange{
private:
	std::map<std::string, double> _rates;
public:
	BitcoinExchange();
	BitcoinExchange(std::string);
	~BitcoinExchange();

	double getValue(std::string);
	std::pair<std::string, double> parseLine(std::string, char const*);
	void exchange(const char *);
};

void parseInput(const char *inputF);

#endif