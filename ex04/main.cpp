#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

namespace ft
{
	void replace(std::string& line, const char* s)
	{
		std::string line2;
		{
			size_t	pos = 0;
			size_t 	replace_pos = line.find(s);
			line2 = line.substr(0, replace_pos);
			if (replace_pos < line.length())
				line2.append(s);
			pos = replace_pos;

		}
	}
}
bool checkArgs(int argc, char* const argv[])
{
	const char* s1 = argv[2];
	const char* s2 = argv[3];

	if (argc < 4 || !s1[0] || !s2[0]) {
		std::cerr << "Wrong args" << std::endl;
		std::cout << "Usage:" << std::endl;
		std::cout << argv[0] << " file string_to_replace string_to_replace_with"
		          << std::endl;
		return false;
	}
	return true;
}
int		main(int argc, char* argv[])
{
	if (!checkArgs(argc, argv))
		return 1;
	std::string		inFileName(argv[1]);
	std::ifstream	fIn;
	fIn.open(inFileName.c_str());
	if (!fIn) {
		std::cerr << "Bad file" << std::endl;
		return 2;
	}
	std::ofstream 	fOut;
	fOut.open(inFileName.append(".replace").c_str());
	if (!fOut) {
		std::cerr << "Failed to create/open "
		          << inFileName << ".replace" << std::endl;
		return 3;
	}
	std::string 		s;
	std::stringstream 	ss;
	ss << fIn.rdbuf();
	std::cout << ss.str();
}
