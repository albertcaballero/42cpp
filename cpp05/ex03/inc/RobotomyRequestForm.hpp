#ifndef ROBOTOMYREQUEST_H_
#define ROBOTOMYREQUEST_H_

#include <iostream>
#include <fstream>
#include "AForm.hpp"


class RobotomyRequestForm: public AForm{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string const);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &old);
	RobotomyRequestForm operator=(RobotomyRequestForm const &old);

	void execution() const;
};

// std::ostream &operator<<(std::ostream &out, ShrubberyCreationForm const &buro);

#endif
