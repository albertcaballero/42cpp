#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

# define FNAME 1
# define LNAME 2
# define NICK 3
# define PHONE 4
# define SECRET 5

class PhoneBook
{
private:
	Contact contact_list[8];
public:
	// PhoneBook();
	// ~PhoneBook();
	int	count;
	void print_full_data(int index);
	void print_line_data();
	void add_contact();
	void search_contacts();
};

int	validdigit(std::string txt);

#endif