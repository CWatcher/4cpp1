#include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	void announce(void);
	~Zombie();
	std::string getName();
	void setName(std:: string);
private:
	std::string _name;
};

Zombie*	newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);
void	randomChump(std::string name);
