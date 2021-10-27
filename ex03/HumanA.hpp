#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);
	bool attack() const;
	const std::string& getName() const;
	void setName(std:: string);
	void setWeapon(Weapon& Weapon);
private:
	std::string _name;
	Weapon&		_weapon;
};
