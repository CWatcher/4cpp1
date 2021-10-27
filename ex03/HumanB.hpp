#pragma once

#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	bool attack() const;
	const std::string& getName() const;
	void setName(std:: string);
	void setWeapon(Weapon& weapon);
private:
	std::string _name;
	Weapon		*_pWeapon;
};
