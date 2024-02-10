#include "Harl.hpp"

int	error_msg(int i)
{
	if (i == 1)
	{
		std::cerr << "invalid argument count\n";
		return (EXIT_FAILURE);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (error_msg(1));
	Harl karen;
	std::string	level = argv[1];
	karen.complain(level);
	return 0;
}