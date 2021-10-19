#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon):
	_name(name), _weapon(weapon)
{}
std::string HumanA::getName()
{
	return _name;
}
void HumanA::setName(std::string name)
{
	_name = name;
}
void HumanA::setWeapon(Weapon& weapon)
{
	_weapon = weapon;
}
bool HumanA::attack()
{
	std::cout << _name << " attacks with his "
	          << _weapon.getType() << std::endl;
	return true;
}
