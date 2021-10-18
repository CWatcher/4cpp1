#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

int	main()
{
	Zombie	z;
	z.setName("stack z");
	z.announce();

	std::stringstream 	stream_name;
	stream_name << "random z" << std::rand();
	randomChump(stream_name.str());

	Zombie	*pz = newZombie("heap z");
	pz->announce();
	delete pz;

//	Zombie *arr_z = new Zombie[3]("array zombie");
	Zombie *arr_z = new Zombie[3];
	for (int i = 0; i < 3; i++)
		arr_z[i].announce();
//	delete arr_z;
	delete[] arr_z;
}
