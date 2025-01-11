#include "BitcoinExchange.hpp"
#include <sstream>

int isFloat(std::string s);
bool parseDate(std::string line);
std::string mstrtrim(std::string s);

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string fname){
	std::ifstream file;
	std::string line;
	std::pair<std::string, double> tmp;

	file.open(fname.c_str());
	if (file.fail())
		throw std::runtime_error("Error opening CSV file");
	std::getline(file, line, '\n');
	if (line != "date,exchange_rate")
		throw (std::runtime_error("Incorrect format in CSV file"));
	while (std::getline(file, line, '\n'))
	{
		tmp = this->parseLine(line, ",");
		_rates.insert(tmp);
	}
	file.close();
}


std::pair<std::string, double> BitcoinExchange::parseLine(std::string line, const char* c){
	size_t pos = line.find(c);
	std::pair<std::string, double> par;
	std::string value;

	if (pos == std::string::npos)
		throw (std::runtime_error("Incorrect format in line"));
	par.first = mstrtrim(line.substr(0, pos));
	if (!parseDate(par.first))
		throw (std::runtime_error("Incorrect format for date YYYY-MM-DD"));
	value = mstrtrim(line.substr(pos + 1, line.length()));
	if (!isFloat(value))
		throw (std::runtime_error("Value is not a valid number"));
	par.second = atof(value.c_str());
	if (par.second > MAXVAL)
		throw (std::runtime_error("Number too big"));
	return par;
}

void BitcoinExchange::exchange(const char *inputF){
	std::ifstream file;
	std::string line;
	std::pair<std::string, double> tmp;

	file.open(inputF);
	if (file.fail())
		throw std::runtime_error("Error opening input file");
	std::getline(file, line, '\n');
	if (line != "date | value")
		throw (std::runtime_error("Incorrect format in input file header"));
	while (std::getline(file, line, '\n'))
	{
		try{
			tmp = this->parseLine(line, "|"); //HAY QUE EMPEZAR DESDE EL FINAL
			for (std::map<std::string, double>::reverse_iterator it = _rates.rbegin(); it != _rates.rend(); it++){
				if (tmp.first >= (*it).first){
					std::cout << tmp.first << " => " <<tmp.second<<" = " <<tmp.second * (*it).second<<std::endl;
					break;
				}
			}
		}catch(std::exception &e){
			std::cout << "Error: "<< e.what() <<std::endl;
		}
	}
	file.close();
}

/* ===================== UTILS ==================== */
int isFloat(std::string s){
    size_t i = 0;
	int p = 0;

    if (s[0] == '+')
        i = 1;
    for (; i < s.length(); ++i){
		if (s[i] == '.')
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
	std::string parsed;
	std::stringstream input_stringstream(line);
	int i = 0;
	while (std::getline(input_stringstream,parsed,'-'))
	{
		if (i == 0){
			if (parsed > "2025" || parsed < "2009")
				return false;
		}
		if (i == 1){
			if (parsed > "12" || parsed < "01")
				return false;
		}
		if (i == 2){
			if (parsed > "31" || parsed < "01")
				return false;
		}
		++i;
	}
	return true;
}

std::string mstrtrim(std::string s){
	if (s.empty())
    	return s;

	size_t i = 0;
	size_t j = s.length() - 1;
	for (; i < s.length() && (s[i] == ' ' || s[i] == '\t'); ++i);
	for (; j >= 0 && (s[j] == ' ' || s[j] == '\t'); --j);

	return s.substr(i, j -i +1);
}