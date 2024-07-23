#ifndef INTERN_H_
#define INTERN_H_

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

class AForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern{
public:
	Intern();
	~Intern();
	Intern(Intern const &old);
	Intern &operator=(Intern const &old);

	AForm *makeForm(std::string, std::string);
	AForm *createShrubberyForm(std::string);
	AForm *createPardonForm(std::string);
	AForm *createRobotomyForm(std::string);
	class NonExistentForm : public std::exception{
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Intern const &buro);

#endif
