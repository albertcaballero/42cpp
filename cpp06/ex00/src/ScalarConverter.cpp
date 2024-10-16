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
	char c = s[0];
	if (c < 33 || c > 126)
        std::cout << "Char: Non displayable" << std::endl;
    else
        std::cout << "Char: '" << c << "'" << std::endl;
    std::cout << "Int: " << (int)c << std::endl;
    std::cout << "Float: " << (float)c << ".0f" << std::endl;
    std::cout << "Double: " << (double)c << ".0" << std::endl;
}

void convertInt(std::string s){
	int num = std::atoi(s.c_str());
	if (!isprint(num))
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: '" << num << "'" << std::endl;
	std::cout << "Int: " << num << std::endl;
    std::cout << "Float: " << num << ".0f" << std::endl;
    std::cout << "Double: " << num << ".0" << std::endl;
}

void convertFloat(std::string s){
	float num = std::atof(s.c_str());
	int numint = static_cast<int>(num);
	if (!isprint(numint))
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: '" << numint << "'" << std::endl;
	std::cout << "Int: " << numint << std::endl;
	std::cout << "Float: " << num << "f" << std::endl;
    std::cout << "Double: " << static_cast<double>(num) << std::endl;
}

void convertDouble(std::string s){
	double num = std::atof(s.c_str());
	int numint = static_cast<int>(num);
	if (!isprint(numint))
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: '" << numint << "'" << std::endl;
	std::cout << "Int: " << numint << std::endl;
	std::cout << "Float: " << static_cast<float>(num) << "f" << std::endl;
    std::cout << "Double: " << num << std::endl;
}

void convertSpecial(std::string s){
	std::cout << "Char: Non displayable" << std::endl;
    std::cout << "Int: Non displayable" << std::endl;
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