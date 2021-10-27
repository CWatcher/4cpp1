#pragma once

#include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	void announce(void) const;
	~Zombie();
	std::string getName() const;
	void setName(std:: string);
private:
	std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
