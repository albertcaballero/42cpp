#include "Harl.hpp"

int	main(void)
{
	Harl karen;

	std::cout << "Karen is happy (debug)\n";
	karen.complain("DEBUG");
	std::cout << "Karen is upset (info)\n";
	karen.complain("INFO");
	std::cout << "Karen is angry (warning)\n";
	karen.complain("WARNING");
	std::cout << "Karen is furious (error)\n";
	karen.complain("ERROR");
	std::cout << "Karen broke\n";
	karen.complain("AAA");
}