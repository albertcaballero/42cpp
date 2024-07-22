#ifndef INTERN_H_
#define INTERN_H_

#include "AForm.hpp"
#include <iostream>

class AForm;

class Intern{
public:
	Intern();
	~Intern();
	Intern(Intern const &old);
	Intern operator=(Intern const &old);

	AForm *makeForm(std::string, std::string);
	AForm *createShrubberyForm();
	AForm *createPardonForm();
	AForm *createRobotomyForm();
	class NonExistentForm : public std::exception{
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Intern const &buro);

#endif
