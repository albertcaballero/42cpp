#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contact
{
public:
	int index;
	std::string first_name;
	std::string	last_name;
	std::string nickname;
private:
	std::string phone;
	std::string	secret;
};

class PhoneBook
{
public:
	int	count;
	Contact contact;
};


#endif