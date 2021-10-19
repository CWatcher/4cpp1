#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name), _pWeapon(NULL)
{}
std::string HumanB::getName()
{
	return _name;
}
void HumanB::setName(std::string name)
{
	_name = name;
}
void HumanB::setWeapon(Weapon& weapon)
{
	_pWeapon = &weapon;
}
bool HumanB::attack()
{
	if (!_pWeapon)
		return false;
	std::cout << _name << " attacks with his "
	          << _pWeapon->getType() << std::endl;
	return true;
}
