#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string fname){
	std::ifstream file;
	file.open(fname);

	file.close();
}

float BitcoinExchange::getValue(std::string date){
	if (_rates.empty())
		throw (std::out_of_range("no value for that date"));
	return _rates[0];
}