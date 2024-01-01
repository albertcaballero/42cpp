#include "phonebook.hpp"

std::string trimstr(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str + ".";
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
	std::cout << "index\t| first name\t| last name\t| nickname" << std::endl;
	for (int i = 0; i < count%8; i++)
	{
		std::cout << i << "\t| ";
		std::cout << trimstr(contact_list[i].get_info(FNAME)) << "\t| ";
		std::cout << trimstr(contact_list[i].get_info(LNAME)) << "\t| ";
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
	std::cout << "--> input index" << std::endl;
	std::cin >> index;
	std::cin.clear();
	if (index.length() > 1){
		std::cout << "--> out of scope, try again" << std::endl;
		search_contacts();
	}
	if (validdigit(index) == -1){
		std::cout << "--> out of scope, try again" << std::endl;
		search_contacts();
	}
	idx = std::stoi(index);
	if (idx > 7 || idx < 0 || idx >= count%8){
		std::cout << "--> out of scope, try again" << std::endl;
		search_contacts(); //doing recursive is not good idea, use while/for/do_while
	}
	print_full_data(idx);
}

int	main(void)
{
	std::string input;
	PhoneBook book;
	std::string color = "\033[38;5;190m";
	std::string NC = "\033[0m";
	while (1)
	{
		std::cout << color << "--> What do you want to do?" << NC << std::endl;
		std::cin >> input;
		std::cin.clear();
		if (input == "ADD"){
			std::cout << color << "--> Who do you want to add?" << NC << std::endl;
			book.add_contact();
		}
		else if (input == "SEARCH"){
			std::cout << color << "--> Who do you want to search?" << NC << std::endl;
			book.search_contacts();
		}
		else if (input == "EXIT")
		{
			std::cout << color << "--> Bye!! <--" << NC << std::endl;
			return (0);
		}
		else
		{
			std::cout << color << "--> Wrong input!! <--\n" << NC << std::endl;
			continue;
		}
	}
	return (0);
}
