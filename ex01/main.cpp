#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

int	main()
{
	int	n = 3;
	Zombie *zHorde = zombieHorde(n, "One of zHorde");
	for (int i = 0; i < n; i++)
		zHorde[i].announce();
	delete[] zHorde;
}
