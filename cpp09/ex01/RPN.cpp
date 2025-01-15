#include "RPN.hpp"

void calculate(std::stack<int> &st, char c){
	int num1, num2;
	if (st.size() < 2)
		throw std::runtime_error("Error in format");
	num1 = st.top();
	st.pop();
	num2 = st.top();
	st.pop();
	if (c == '+')
		num1 = num2 + num1;
	else if (c == '-')
		num1 = num2 - num1;
	else if (c == '*')
		num1 = num2 * num1;
	else if (c == '/'){
		if (num1 == 0)
			throw std::runtime_error("Cannot divide by 0");
		num1 = num2 / num1;
	}
	else
		throw std::runtime_error("Error in format");
	st.push(num1);
}

void doRPN(char* argv){
	std::string values(argv);
	std::istringstream	iss(values);
	std::string val;
	std::stack<int> st;

	while (std::getline(iss, val, ' ')){
		if (!val.empty()){
			if (val.length() != 1)
				throw std::runtime_error("Error in format in -> " + val);
			if (isdigit(val[0]))
				st.push(atoi(val.c_str()));
			else
				calculate(st, val[0]);
		}
	}
	if (st.size() != 1)
		throw std::runtime_error("Error in format");
	std::cout << st.top() << std::endl;
}