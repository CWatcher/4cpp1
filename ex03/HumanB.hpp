#pragma once

#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	bool attack();
	std::string getName();
	void setName(std:: string);
	void setWeapon(Weapon& weapon);
private:
	std::string _name;
	Weapon		*_pWeapon;
};
