#include "phonebook.hpp"

void add_contact()
{
	return ;
}

void	display_all_contacts()
{
	std::string str = "hola!quetal!!moltbe";
	std::cout << "index\t| first name\t| last name\t| nickname" << std::endl;
	str.resize(10);
	std::cout << str << "." << std::endl;
}

void search_contacts()
{
	std::string	index;
	int			idx;
	
	display_all_contacts();
	std::cin >> index;
	std::cin.clear();
	if (index.length() > 2){
		std::cout << "out of scope, try again" << std::endl;
		search_contacts();
	}
	idx = std::stoi(index);
	if (idx > 7 || idx < 0){
		std::cout << "out of scope, try again" << std::endl;
		search_contacts();
	}
}

int	main(void)
{
	std::string input;
	while (1)
	{
		std::cin >> input;
		std::cin.clear();
		if (input == "ADD"){
			std::cout << "what do you want to add?" << std::endl;
		}
		else if (input == "SEARCH"){
			std::cout << "who do you want to search?" << std::endl;
			search_contacts();
		}
		else if (input == "EXIT")
		{
			std::cout << "bye!!" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "--wrong input!!--\nEXITING..." << std::endl;
			return (1);
		}
	}
	return (0);
}
