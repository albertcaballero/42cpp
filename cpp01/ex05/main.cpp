#include "Harl.hpp"

int	main(void)
{
	Harl karen;

	std::cout << "\033[38;5;190m-->Karen is happy (debug)\033[0m\n";
	karen.complain("DEBUG");
	std::cout << "\033[38;5;190m-->Karen is upset (info)\033[0m\n";
	karen.complain("INFO");
	std::cout << "\033[38;5;190m-->Karen is angry (warning)\033[0m\n";
	karen.complain("WARNING");
	std::cout << "\033[38;5;190m-->Karen is furious (error)\033[0m\n";
	karen.complain("ERROR");
	std::cout << "\033[38;5;190m-->Karen broke\033[0m\n";
	karen.complain("AAA");
}