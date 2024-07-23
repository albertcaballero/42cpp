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
	bool f = false;
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
	if (point > 0)
		return 4;
	return 2;
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
			convertChar(str);
			break;
		case 2:
			convertInt(str);
			break;
		case 3:
			convertFloat(str);
			break;
		case 4:
			convertDouble(str);
			break;
		
	}
}