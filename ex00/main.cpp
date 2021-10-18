#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

int	main()
{
	std::string 		name = "random z";
	std::stringstream 	ss;

	ss << name << std::rand();
	randomChump(ss.str());

	Zombie	*pz = newZombie("heap z");
	pz->announce();
	delete pz;
}
