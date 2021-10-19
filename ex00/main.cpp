#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

int	main()
{
	Zombie z("stack z");
	z.announce();

	std::stringstream 	stream_name;
	stream_name << "random z" << std::rand();
	randomChump(stream_name.str());

	Zombie	*pz = newZombie("heap z");
	pz->announce();
   delete pz;
}
