#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern &Intern::operator=(Intern const &old){
	if (&old == this){
		return *this;
	}
	return *this;
}

AForm *Intern::createShrubberyForm(std::string target){
	ShrubberyCreationForm *shrub = new ShrubberyCreationForm(target);
	return shrub;
}

AForm *Intern::createPardonForm(std::string target){
	PresidentialPardonForm *pardon = new PresidentialPardonForm(target);
	return pardon;
}

AForm *Intern::createRobotomyForm(std::string target){
	RobotomyRequestForm *robotomy = new RobotomyRequestForm(target);
	return robotomy;
}

const char *Intern::NonExistentForm::what() const throw(){
	return "This form type doesn't exist";
}

AForm *Intern::makeForm(std::string name, std::string target){
	Intern tmp;
	AForm *form;
	AForm* (Intern::*fnts[])(std::string) = {
		&Intern::createShrubberyForm,
		&Intern::createPardonForm,
		&Intern::createRobotomyForm
	};
	std::string types[4];
	{
		types[0] = "shrubbery";
		types[1] = "pardon";
		types[2] = "robotomy";
	}
	for (int i = 0; i < 4; i++)
	{
		if (name == types[i])
		{
			form = (tmp.*fnts[i])(target);
			std::cout << "Intern creates " << name << std::endl;
			return form;
		}
	}
	throw (Intern::NonExistentForm());
}
