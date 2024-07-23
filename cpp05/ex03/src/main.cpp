#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	bruocrat("bruocrat", 22);
	Bureaucrat	boss("Boss", 1);
	Intern		becari;
	AForm		*form = NULL;
	AForm		*form2 = NULL;

	try
	{
		std::cout << "===============TEST 1============" << std::endl;
		form = becari.makeForm("pardon", "aaaa");
		form2 = becari.makeForm("robotomy", "bbbb");
		std::cout << std::endl;
		std::cout << bruocrat;
		std::cout << boss;
		std::cout << *form;
		std::cout << *form2;
		std::cout << std::endl;


		bruocrat.signForm(*form);
		bruocrat.executeForm(*form); //cannot execute pardon

		std::cout << *form << std::endl;


		boss.signForm(*form); //can
		boss.executeForm(*form); //can

		bruocrat.signForm(*form2); //can
		bruocrat.executeForm(*form2); //can
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	delete form;
	delete form2;
	try{
		std::cout << "===============TEST 2============" << std::endl;
		form = becari.makeForm("noexiste", "cccc");
		form2 = becari.makeForm("shrubbery", "dddd");
		delete form;
		delete form2;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
