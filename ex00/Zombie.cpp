#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name): _name(name)
{}
Zombie::~Zombie()
{
	std::cout << _name << " died" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie*	newZombie(std::string name)
{
	return new Zombie(name);
}
void	randomChump(std::string name)
{
	Zombie z(name);

	z.announce();
}
