#ifndef UTILS_H_
#define UTILS_H_

#include <iostream>

#define T_INT 1
#define T_DOUBLE 2
#define T_FLOAT 3
#define T_CHAR 4
#define T_SPECIAL 5
#define T_ERROR -1

int	findType(std::string s);
void displayError(std::string s);


#endif