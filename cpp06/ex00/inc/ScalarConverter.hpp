#ifndef SCALARCONVERTER_H_
#define SCALARCONVERTER_H_

#include <iostream>
#include <limits>

class ScalarConverter{
protected:
	~ScalarConverter();
public:
	ScalarConverter();
	ScalarConverter &operator=(ScalarConverter& old);
	ScalarConverter(ScalarConverter& old);

	static void convert(std::string);
};

std::ostream &operator<<(std::ostream &out, AForm const &form);

#endif