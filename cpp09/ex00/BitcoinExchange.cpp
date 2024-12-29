#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string fname){
	std::ifstream file;
	std::string line;
	std::pair<std::string, double> tmp;

	file.open(fname.c_str());
	if (file.fail())
		throw std::runtime_error("Error opening input file.");
	while (std::getline(file, line, '\n'))
	{
		tmp = this->parseLine(line);
		_rates.insert(tmp);
	}
	file.close();
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

	if (pos == std::string::npos)
		throw (std::runtime_error("Incorrect format in CSV file"));
	par.first = line.substr(0, pos);
	if (!parseDate(par.first))
		throw (std::runtime_error("Incorrect format for date in CSV file"));
	value = line.substr(pos + 1, line.length());
	if (!isFloat(value))
		throw (std::runtime_error("Incorrect format for value in CSV file"));
	par.second = atof(value.c_str());
	return par;
}


/* ===================== PARSING UTILS ==================== */
int isFloat(std::string s){
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

bool parseDate(std::string line){
	for (size_t i = 0; i<line.length(); ++i){
		if((i == 4 || i == 7) && line[i]!='-')
			return false;
		else if(!isnumber(line[i]) && line[i]!='-')
			return false;
	}
	return true;
}


void parseLine(std::string line){
	size_t pos = line.find("|");
	std::string value, date;
	double val;

	if (pos == std::string::npos)
		throw (std::runtime_error("Incorrect format for input"));
	date = line.substr(0, pos);
	if (!parseDate(date))
		throw (std::runtime_error("Incorrect format for input"));
	value = line.substr(pos + 1, line.length());
	// val = atof(value.c_str());
	if (!isFloat(value))
		throw (std::runtime_error("Incorrect format for input"));
}

void parseInput(const char *inputF){
	std::ifstream file;
	std::string line;

	file.open(inputF);
	while (std::getline(file, line, '\n'))
	{
		parseLine(line);
	}
	file.close();
}