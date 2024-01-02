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

	while (1)
	{
		getline(std::cin, input);
		if (std::cin.eof()){
			std::cerr << "\033[38;5;190m--> EXITING...\n";
			exit(1);
		}
		for (int i = 0; input[i] != 0; i++)
		{
			if (input[i] != ' ')
				return input;
		}
		std::cout << "--> Invalid, try again : ";
	}
	return input;
}

std::string Contact::input_phone()
{
	std::string input;

	while (1)
	{
		getline(std::cin, input);
		if (std::cin.eof()){
			std::cerr << "\033[38;5;190m--> EXITING...\n";
			exit(1);
		}
		if (validdigit(input) == -1 || input.length() < 7){
			std::cout << "--> Invalid, try again : ";
		}
		else
			return input;
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