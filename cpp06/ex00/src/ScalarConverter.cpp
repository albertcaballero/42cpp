#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){
    std::cout << "Default Constructor" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter &old){
    std::cout << "Copy Constructor" << std::endl;
    *this = old;
}

ScalarConverter ScalarConverter::operator=(ScalarConverter &old){
    (void)old;
    std::cout << "Copy Operator" << std::endl;
    return (*this);
}

ScalarConverter::~ScalarConverter(){
    std::cout << "Default Destructor" << std::endl;    
}

// 1 char, 2 int, 3 float, 4 double
void ScalarConverter::convert(std::string str){
	if (str.length() == 0)
		return;
	int type = findType(str);
	switch (type)
	{
		case T_ERROR:
			displayError(str);
			break;
		case T_CHAR:
			convertChar(str);
			break;
		case T_INT:
			convertInt(str);
			break;
		case T_FLOAT:
			convertFloat(str);
			break;
		case T_DOUBLE:
			convertDouble(str);
			break;
		
	}
}

void convertChar(std::string s){
	char numch = s[0];
	char numint = static_cast<char>(numch);
	float numf = static_cast<float>(numch);
	double numd = static_cast<double>(numch);
	if (!isprint(numch))
        std::cout << "Char: Impossible" << std::endl;
    else
        std::cout << "Char: '" << numch << "'" << std::endl;
    std::cout << "Int: " << numint << std::endl;
    std::cout << "Float: " << numf << "f" << std::endl;
    std::cout << "Double: " << numd << std::endl;
}

void convertInt(std::string s){
	int numint = std::atoi(s.c_str());
	char numch = static_cast<char>(numint);
	float numf = static_cast<float>(numint);
	double numd = static_cast<double>(numint);
	if (!isprint(numch))
		std::cout << "Char: Impossible" << std::endl;
	else
		std::cout << "Char: '" << numch << "'" << std::endl;
	std::cout << "Int: " << numint << std::endl;
    std::cout << "Float: " << numf << "f" << std::endl;
    std::cout << "Double: " << numd<< std::endl;
}

void convertFloat(std::string s){
	float numf = std::atof(s.c_str());
	int numint = static_cast<int>(numf);
	char numch = static_cast<char>(numf);
	double numd = static_cast<double>(numf);
	if (!isprint(numf))
		std::cout << "Char: Impossible" << std::endl;
	else
		std::cout << "Char: '" << numch << "'" << std::endl;
	if (numint > INT_MAX || numint < INT_MIN)
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "Int: " << numint << std::endl;
	std::cout << "Float: " << numf << std::endl;
    std::cout << "Double: " << numd << std::endl;
}

void convertDouble(std::string s){
	double numd = std::atof(s.c_str());
	float numf = static_cast<float>(numd); 
	int numint = static_cast<int>(numd);
	char numch = static_cast<char>(numd);
	if (!isprint(numint))
		std::cout << "Char: Impossible" << std::endl;
	else
		std::cout << "Char: '" << numch << "'" << std::endl;
	if (numint > INT_MAX || numint < INT_MIN)
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "Int: " << numint << std::endl;
	std::cout << "Float: " << numf << "f" << std::endl;
    std::cout << "Double: " << numd << std::endl;
}

void convertSpecial(std::string s){
	std::cout << "Char: Impossible" << std::endl;
    std::cout << "Int: Impossible" << std::endl;
	if (s == "nan" || s == "nanf"){
		std::cout << "Float: nanf" << std::endl;
        std::cout << "Double: nan" << std::endl;
	}
	else if (s == "+inff" || s == "+inff"){
		std::cout << "Float: +inff" << std::endl;
        std::cout << "Double: +inf" << std::endl;
	}
	else if (s == "-inff" || s == "-inff"){
		std::cout << "Float: -inff" << std::endl;
        std::cout << "Double: -inf" << std::endl;
	}
}

void displayError(std::string s){
	std::cout << s << " is nothing!!" << std::endl;
}