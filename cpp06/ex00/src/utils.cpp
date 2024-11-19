#include "utils.hpp"

int	findType(std::string s){
	int point = 0;
	if (s.length() == 1)
		return T_CHAR;
	if (check_special(s))
		return T_SPECIAL;
	for (size_t i = 0; i < s.length(); ++i){
		if (s[i] == '.')
			point++;
	}
	if (point == 0)
		return check_int(s);
	if (point == 1){
		if (s[s.length() - 1] == 'f' || s[s.length() - 1] == 'F')
			return check_float(s);
		return check_double(s);
	}
	else if (point > 1)
		return T_ERROR;
	return 2;
}

int check_int(std::string s){
    size_t i = 0;

    if (s[0] == '-' || s[0] == '+')
        i = 1;
    for (; i < s.length(); ++i)
    {
        if (isdigit(s[i]) == 0)
            return (T_ERROR);
    }
    return (T_INT);
}

int check_float(std::string s){
    size_t i = 0;

    if (s[0] == '-' || s[0] == '+')
        i = 1;
    for (; i < s.length() - 1; ++i)
    {
        if (isdigit(s[i]) == 0 && s[i] != '.')
            return (T_ERROR);
    }
    return (T_FLOAT);
}

int check_double(std::string s){
    size_t i = 0;

    if (s[0] == '-' || s[0] == '+')
        i = 1;
    for (; i < s.length(); ++i)
    {
        if (isdigit(s[i]) == 0 && s[i] != '.')
            return (T_ERROR);
    }
    return (T_DOUBLE);
}

bool check_special(std::string s){
    return s == "+inf" || s == "-inf" || s == "nan" || s == "+inff" || s == "-inff" || s == "nanf";
}

void displayError(std::string s){
	std::cout << "ERROR: " << s << std::endl;
}
