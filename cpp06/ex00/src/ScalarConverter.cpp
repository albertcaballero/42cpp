#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter& old){
	(void)old;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter& old){
	if (&old == this)
		return *this;
	return *this;
}

int	findType(std::string s){
	int point = 0;
	if (s.length() == 1)
		return 1;
	for (int i = 0; i < s.length(); ++i){
		if (s[i] == '.')
			point++;
		if (s[i] == 'f'){
			if (point == 0)
				return 1;
			else
				return -1;
		}
	}
	if (point == 1)
		return 4;
	else if (point > 1)
		return -1;
	return 2;
}

void displayError(std::string s){

}

char convertChar(std::string s){
	return (s[0]);
}

int convertInt(std::string s){
	return atoi(s.c_str());
}

float convertFloat(std::string s){
	if (s == "-inff")
		return -1 * std::numeric_limits<double>::infinity();
	if (s == "+inff" || s=="inff")
		return std::numeric_limits<double>::infinity();
	if (s == "nanf")
		return std::numeric_limits<double>::quiet_NaN();
	return atof(s.c_str());
}

double convertDouble(std::string s){
	if (s == "-inf")
		return -1 * std::numeric_limits<double>::infinity();;
	if (s == "+inf" || s=="inf")
		return std::numeric_limits<double>::infinity();;
	if (s == "nan")
		return std::numeric_limits<double>::quiet_NaN();
	return atof(s.c_str());
}

// 1 char, 2 int, 3 float, 4 double
void ScalarConverter::convert(std::string str){
	float fl = 0;
	int in = 0;
	char ch = 0;
	double dl = 0;

	if (str.length() == 0)
		return;
	int type = findType(str);
	switch (type)
	{
		case -1:
			displayError(str);
			break;
		case 1:
			ch = convertChar(str);
			break;
		case 2:
			in = convertInt(str);
			break;
		case 3:
			fl = convertFloat(str);
			break;
		case 4:
			dl = convertDouble(str);
			break;
		
	}
}