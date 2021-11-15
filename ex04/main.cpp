#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

namespace ft
{
	void replace(const std::string& s,
		const std::string& s1, const std::string& s2, std::ofstream& fOut)
	{
		size_t	pos = 0;
		size_t 	replacePos = 0;
		while(replacePos < s.length())
		{
			replacePos = s.find(s1, pos);
			fOut << s.substr(pos, replacePos - pos);
			if (replacePos < s.length() - 1)
				fOut << s2;
			pos = replacePos + s1.length();
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
		std::cerr  << inFileName << " is bad file" << std::endl;
		return 2;
	}
	if (fIn.peek() == std::ifstream::traits_type::eof()) {
		std::cerr << inFileName << " is empty file" << std::endl;
		return 4;
	}
	std::ofstream 	fOut;
	fOut.open( ( inFileName + ".replace" ).c_str() );
	if (!fOut) {
		std::cerr << "Failed to create/open "
		          << inFileName << ".replace" << std::endl;
		return 3;
	}
	std::string 		s;
	std::stringstream 	ss;
	ss << fIn.rdbuf();

	ft::replace(ss.str(), argv[2], argv[3], fOut);
}
