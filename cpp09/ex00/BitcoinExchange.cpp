#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string fname){
	std::ifstream file;
	std::string line;
	std::pair<std::string, double> tmp;

	file.open(fname.c_str());
	while (std::getline(file, line, '\n'))
	{
		tmp = this->parseLine(line);
		_rates.insert(tmp);
	}
	file.close();
	// std::map<std::string, double>::iterator it;
	// for (it = _rates.begin(); it != _rates.end(); it++)
	// {
	// 	std::cout << it->first    // string (key)
	// 			<< ':'
	// 			<< it->second   // string's value 
	// 			<< std::endl;
	// }
}

double BitcoinExchange::getValue(std::string date){
	if (_rates.empty())
		throw (std::out_of_range("no value for that date"));
	return _rates[date];
}

std::pair<std::string, double> BitcoinExchange::parseLine(std::string line){
	size_t pos = line.find(",");
	std::pair<std::string, double> par;
	std::string value;

	// if (pos == std::string::npos)
	// 	throw (std::runtime_error("Incorrect format for input"));
	par.first = line.substr(0, pos);
	//parse date un poquito solo
	value = line.substr(pos + 1, line.length());

	par.second = atof(value.c_str());
	return par;
}