#ifndef UTILS_H_
#define UTILS_H_

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <iomanip>

#define T_INT 1
#define T_DOUBLE 2
#define T_FLOAT 3
#define T_CHAR 4
#define T_SPECIAL 5
#define T_ERROR -1

int	findType(std::string s);
void displayError(std::string s);
void convertChar(std::string s);
void convertInt(std::string s);
void convertFloat(std::string s);
void convertDouble(std::string s);
void convertSpecial(std::string s);

bool check_special(std::string s);
int check_double(std::string s);
int check_float(std::string s);
int check_int(std::string s);


#endif
