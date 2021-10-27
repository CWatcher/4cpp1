#include "Karen.hpp"
#include <iostream>

int main(int, char** argv)
{
	Karen karen;
	if (*argv && *++argv)
		karen.complain(*argv);
}
