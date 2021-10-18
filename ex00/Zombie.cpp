#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	_name = "zombie";
}
Zombie::Zombie(std::string name): _name(name)
{}
Zombie::~Zombie()
{
	std::cout << _name << " died" << std::endl;
}
std::string Zombie::getName()
{
	return _name;
}
void Zombie::setName(std::string name)
{
	_name = name;
}
void Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
