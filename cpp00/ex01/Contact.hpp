#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string first_name;
	std::string	last_name;
	std::string nickname;
	std::string phone;
	std::string	secret;
public:
	// Contact();
	// ~Contact();
	void		create();
	std::string input();
	std::string input_phone();
	std::string	get_info(int type);
	int index;
};

#endif