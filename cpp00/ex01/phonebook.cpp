#include "phonebook.hpp"

void add_contact()
{
	return ;
}

void search_contacts()
{
	return ;
}

int	main(void)
{
	std::string input;
	while (1)
	{
		std::cin >> input;
		std::cin.clear();
		if (input == "ADD")
			std::cout << "gonna add this" << std::endl;
		else if (input == "SEARCH")
			std::cout << "gonna search that" << std::endl;
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
