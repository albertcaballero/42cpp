#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{

	Bureaucrat	rookie("rookie", 140);
	Bureaucrat	boss("Boss", 1);
	Form		basicForm("Decl. of independence", 140, 150);
	Form		advancedForm("Geneva convention", 10, 1);

	std::cout << rookie;
	std::cout << boss;
	std::cout << basicForm;
	std::cout << advancedForm;
	std::cout << "====================" << std::endl;

	try
	{
		rookie.signForm(basicForm);
		rookie.signForm(advancedForm);
		boss.signForm(advancedForm);
	
		std::cout << "====================" << std::endl;
		std::cout << basicForm;
		std::cout << advancedForm;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
