#ifndef SCALARCONVERTER_H_
#define SCALARCONVERTER_H_

#include <iostream>
#include "utils.hpp"

class ScalarConverter{
private:
	ScalarConverter(void);
	ScalarConverter(ScalarConverter &old);
	ScalarConverter operator=(ScalarConverter &old);
	~ScalarConverter();
public:
	static void convert(std::string str);
};

#endif
