#include "phonebook.hpp"
#include "Contact.hpp"

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
		if (input == "ADD" || input == "add" || input == "A"){
			std::cout << "\033[38;5;190m--> Who do you want to add?" << NC << std::endl;
			book.add_contact();
		}
		else if (input == "SEARCH" || input == "search" || input == "S"){
			std::cout << "\033[38;5;190m--> Who do you want to search?" << NC << std::endl;
			book.search_contacts();
		}
		else if (input == "EXIT" || input == "exit" || input == "E"){
			std::cout << "\033[38;5;190m--> Bye!! <--" << NC << std::endl;
			return (0);
		}
		else {
			std::cout << "\033[38;5;190m--> Wrong input!! <--\n" << NC << std::endl;
		}
	}
	return (0);
}
