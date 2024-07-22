#ifndef PRESIDENTIALPARDON_H_
#define PRESIDENTIALPARDON_H_

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm{
private:
	std::string _target;
public:
	PresidentialPardonForm(std::string const);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &old);
	PresidentialPardonForm operator=(PresidentialPardonForm const &old);

	void execution() const;
};

// std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &buro);

#endif
