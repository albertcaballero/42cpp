#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string fname){
	std::ifstream file;
	std::string line;
	std::pair<std::string, float> tmp;

	file.open(fname);
	while (std::getline(file, line, '\n'))
	{
		tmp = this->parseLine(line);
		_rates.insert(tmp);
	}
	file.close();
}

float BitcoinExchange::getValue(std::string date){
	if (_rates.empty())
		throw (std::out_of_range("no value for that date"));
	return _rates[0];
}

std::pair<std::string, float> BitcoinExchange::parseLine(std::string line){
	size_t pos = line.find("|");
	std::pair<std::string, float> par;
	std::string value;

	if (pos == std::string::npos)
		throw (std::runtime_error("Incorrect format for input"));
	par.first = line.substr(0, pos);
	value = line.substr(pos, line.length());

	par.second = atof(value.c_str());
}