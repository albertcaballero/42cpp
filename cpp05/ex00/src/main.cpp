#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl << "================= Init imposible (too low 922)" << std::endl;
	try	{
		Bureaucrat test("PETER", 922);
	}
	catch (std::exception & e)
	{
		std::cout << "EXCETION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "================= Increment impossible" << std::endl;
	try	{
		Bureaucrat test("PETER", 1);

		std::cout << "Pre Grade: " << test.getGrade() << std::endl;
		test.increaseGrade();
		std::cout << "Grade: " << test.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "EXCETION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "================= Increment possible" << std::endl;
	try	{
		Bureaucrat test("PETER", 2);

		std::cout << "Pre Grade: " << test.getGrade() << std::endl;
		test.increaseGrade();
		std::cout << "Grade: " << test.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "EXCETION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "================= Decrement impossible" << std::endl;
	try	{
		Bureaucrat test("PETER", 150);

		std::cout << "Pre Grade: " << test.getGrade() << std::endl;
		test.decreaseGrade();
		std::cout << "Grade: " << test.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "EXCETION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "================= Decrement possible" << std::endl;
	try	{
		Bureaucrat test("PETER", 149);

		std::cout << "Pre Grade: " << test.getGrade() << std::endl;
		test.decreaseGrade();
		std::cout << "Grade: " << test.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "EXCETION: " << e.what() << std::endl;
	}

	std::cout << std::endl << "================= OTHER TESTS" << std::endl;
	try	{
		Bureaucrat test("PETER", 125);

		std::cout << test;
		test.decreaseGrade();
		std::cout << test;
		test.decreaseGrade();
		std::cout << test;
		test.increaseGrade();
		std::cout << test;
	}
	catch (std::exception & e)
	{
		std::cout << "EXCETION: " << e.what() << std::endl;
	}
}
