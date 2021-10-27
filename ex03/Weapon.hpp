#pragma once

#include <string>

class Weapon
{
public:
	Weapon(std::string type);
	const std::string& getType() const;
	void setType(std:: string);
private:
	std::string _type;
};
