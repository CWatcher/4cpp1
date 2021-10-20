#include <string>
#include <fstream>
#include <iostream>

int main(int, char *argv[])
{
	if (!argv[1] || !argv[2] || !argv[3] || !argv[2][0] || !argv[3][0]) {
		std::cerr << "Wrong args. Usage:" << std::endl;
		std::cerr << argv[0] << " file string_to_replace string_to_replace_with"
		          << std::endl;
		return 1;
	}
	std::ifstream	fIn(argv[1]);
	if (!fIn) {
		std::cerr << "Bad file" << std::endl;
		return 2;
	}
	std::string		fName(argv[1]);
	std::ofstream 	fOut(fName.append(".replace"));
	std::string 	line;
	while(fIn) {
		std::getline(fIn, line);
		fOut << line << std::endl;
	}
}
