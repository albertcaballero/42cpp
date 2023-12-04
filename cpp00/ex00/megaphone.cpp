#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int j = 1; j < argc; j++)
	{
		for (int i = 0; argv[j][i] != 0; i++)
		{
			std::cout << (char)toupper(argv[j][i]);
		}
	}
	std::cout << std::endl;
	return (0);
}