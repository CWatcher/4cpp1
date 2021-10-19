#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*pz = new Zombie[N];

	if (!pz)
		return (NULL);
	for (int i = 0; i < N; i++)
		pz[i].setName(name);
	return pz;
}
