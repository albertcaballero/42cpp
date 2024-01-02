#include "phonebook.hpp"

std::string trimstr(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

int	validdigit(std::string txt)
{
	if(txt.empty())
		return (-1);
	for (int i = 0; txt[i]; i++)
	{
		if (txt[i] < 48 || txt[i] > 57)
			return (-1);
	}
	return (1);
}

void	PhoneBook::print_full_data(int index)
{
	std::cout << "FIRST NAME : " << contact_list[index].get_info(FNAME) << std::endl;
	std::cout << "LAST NAME  : " << contact_list[index].get_info(LNAME) << std::endl;
	std::cout << "NICKNAME   : " << contact_list[index].get_info(NICK) << std::endl;
	std::cout << "PHONE NBR  : " << contact_list[index].get_info(PHONE) << std::endl;
	std::cout << "DARK SECRET: " << contact_list[index].get_info(SECRET) << std::endl;
}

void	PhoneBook::print_line_data()
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < count%8; i++)
	{
		std::cout << "         " << i << "|";
		for (int j = 0; j < 10 - (int)contact_list[i].get_info(FNAME).length(); j++)
			std::cout << " ";
		std::cout << trimstr(contact_list[i].get_info(FNAME)) << "|";
		for (int j = 0; j < 10 - (int)contact_list[i].get_info(LNAME).length(); j++)
			std::cout << " ";
		std::cout << trimstr(contact_list[i].get_info(LNAME)) << "|";
		for (int j = 0; j < 10 - (int)contact_list[i].get_info(NICK).length(); j++)
			std::cout << " ";
		std::cout << trimstr(contact_list[i].get_info(NICK)) << std::endl;
	}
}

void PhoneBook::add_contact()
{
	count %= 8;
	contact_list[count].create();
	count++;
}

void PhoneBook::search_contacts()
{
	std::string	index;
	int			idx;
	
	print_line_data();
	while (1)
	{
		std::cout << "--> input index: ";
		getline(std::cin, index);
		if (std::cin.eof()){
			std::cerr << "\033[38;5;190m--> EXITING...\n";
			exit(1);
		}
		if (index.length() > 1 || validdigit(index) == -1){
			std::cout << "--> out of scope, try again" << std::endl;
			continue;
		}
		idx = std::stoi(index);
		if (idx > 7 || idx < 0 || idx >= count%8)
			std::cout << "--> out of scope, try again" << std::endl;
		else
			break;
	}
	print_full_data(idx);
}

int	main(void)
{
	std::string input;
	PhoneBook book;
	std::string NC = "\033[0m";
	while (1)
	{
		std::cout << "\033[38;5;190m--> What do you want to do?" << NC << std::endl;
		getline(std::cin, input);
		if (std::cin.eof()){
			std::cerr << "\033[38;5;190m--> EXITING...\n";
			exit(1);
		}
		if (input == "ADD"){
			std::cout << "\033[38;5;190m--> Who do you want to add?" << NC << std::endl;
			book.add_contact();
		}
		else if (input == "SEARCH"){
			std::cout << "\033[38;5;190m--> Who do you want to search?" << NC << std::endl;
			book.search_contacts();
		}
		else if (input == "EXIT"){
			std::cout << "\033[38;5;190m--> Bye!! <--" << NC << std::endl;
			return (0);
		}
		else {
			std::cout << "\033[38;5;190m--> Wrong input!! <--\n" << NC << std::endl;
		}
	}
	return (0);
}
