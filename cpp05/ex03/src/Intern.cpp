#include "Intern.hpp"

AForm *Intern::createShrubberyForm(){

}

AForm *Intern::createPardonForm(){

}

AForm *Intern::createRobotomyForm(){

}

AForm *Intern::makeForm(std::string name, std::string target){
	Intern tmp;
	AForm *form;
	AForm* (Intern::*fnts[])(void) = {
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
			form = (tmp.*fnts[i])();
			return;
		}
	}
	std::cout << "Intern creates " << name << std::endl;
}