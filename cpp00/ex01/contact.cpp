#include "phonebook.hpp"

std::string Contact::get_info(int type)
{
	if (type == FNAME)
		return (first_name);
	else if (type == LNAME)
		return (last_name);
	else if (type == NICK)
		return (nickname);
	else if (type == PHONE)
		return (phone);
	else if (type == SECRET)
		return (secret);
	return (first_name);
}

std::string Contact::input()
{
	std::string input;

	std::cin >> input;
	std::cin.clear();
	if (input.empty() || std::cin.eof())
		exit(5);
	return input;
}

std::string Contact::input_phone()
{
	std::string input;

	std::cin >> input;
	std::cin.clear();
	if (input.empty() || std::cin.eof())
		exit(5);
	if (validdigit(input) == -1 || input.length() < 7){
		std::cout << "--> INVALID NUMBER\nPHONE       : ";
		input_phone();
	}
	return input;
}

void	Contact::create()
{
	std::cout << "FIRST NAME  : ";
	first_name = input();
	std::cout << "LAST NAME   : ";
	last_name = input();
	std::cout << "NICKNAME    : ";
	nickname = input();
	std::cout << "PHONE       : ";
	phone = input_phone();
	std::cout << "DARK SECRET : ";
	secret = input();
	std::cout << std::endl;
}