#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	Bureaucrat	burocrata("burocrata", 145);
	Bureaucrat	boss("Boss", 1);
	AForm		*shrubberyForm = new ShrubberyCreationForm("bush");
	AForm		*robotomyForm = new RobotomyRequestForm("robot");
	AForm		*pardonForm = new PresidentialPardonForm("sanchez");

	try
	{
		std::cout << burocrata << std::endl;
		std::cout << boss << std::endl;
		std::cout << *shrubberyForm << std::endl;
		std::cout << *robotomyForm << std::endl;
		std::cout << *pardonForm << std::endl;

		burocrata.signForm(*shrubberyForm);
		burocrata.executeForm(*shrubberyForm);

		std::cout << *shrubberyForm << std::endl;

		boss.executeForm(*shrubberyForm);

		std::cout << "=========================" << std::endl;
		std::cout << *robotomyForm << std::endl;
		burocrata.signForm(*robotomyForm);
		boss.signForm(*robotomyForm);
		boss.executeForm(*robotomyForm);

		std::cout << "=========================" << std::endl;
		burocrata.signForm(*pardonForm);
		burocrata.executeForm(*pardonForm);
		boss.executeForm(*pardonForm);
		boss.signForm(*pardonForm);
		boss.executeForm(*pardonForm);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	delete shrubberyForm;
	delete robotomyForm;
	delete pardonForm;
	return (0);
}
