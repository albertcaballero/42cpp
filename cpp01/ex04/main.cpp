#include <iostream>
#include <iomanip>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "invalid argument count\n";
		return 0;
	}
	std::ifstream in(argv[1]);
	std::string outfile = argv[1];
	outfile.append(".replace");
	std::ofstream out(outfile);
}