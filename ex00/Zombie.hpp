#include <string>

class Zombie
{
public:
	Zombie(std::string name);
	void announce(void);
	~Zombie();
private:
	std::string _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
