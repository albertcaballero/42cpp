#ifndef SHRUBBERYCREATION_H_
#define SHRUBBERYCREATION_H_

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm{
private:
	std::string _target;
public:
	ShrubberyCreationForm(std::string const);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &old);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &old);

	void execution() const;
};

// std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &buro);

#endif
