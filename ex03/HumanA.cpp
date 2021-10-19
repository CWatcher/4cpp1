#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name): _name(name), _pWeapon(NULL)
{}
std::string HumanA::getName()
{
	return _name;
}
void HumanA::setName(std::string name)
{
	_name = name;
}
void HumanA::setWeapon(Weapon& Weapon)
{
	_pWeapon = &Weapon;
}
bool HumanA::attack()
{
	if (!_pWeapon)
		return false;
	std::cout << _name << " attacks with his "
	          << _pWeapon->getType() << std::endl;
	return true;
}
