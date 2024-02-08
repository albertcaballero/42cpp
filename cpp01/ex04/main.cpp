#include <iostream>
#include <iomanip>
#include <fstream>

int	check_arguments(int argc, char **args)
{
	if (argc != 4)
	{
		std::cerr << "invalid argument count\n";
		return -1;
	}
	if (args[0][0] == 0 || args[1][0] == 0 || args[2][0] == 0)
	{
		std::cerr << "invalid arguments\n";
		return -1;
	}
	return 0;
}

int	main(int argc, char **argv)
{
	if (check_arguments(argc, argv) < 0)
		return (1);
	int i;
	std::string buffer;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream in(argv[1]);
	std::string outfile = argv[1];
	outfile.append(".replace");
	std::ofstream out(outfile);

	while (getline(in, buffer))
	{
		i = 0;
		while (i < buffer.length())
		{
			i = buffer.find(s1);
			buffer.erase(i, s1.length());
			buffer.insert(i, s2);
			i += s1.length();
		}
		out << buffer << std::endl;
	}
	out.close();
	in.close();
}