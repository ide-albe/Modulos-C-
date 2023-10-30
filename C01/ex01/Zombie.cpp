#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
	this->zomb_num = 0;
}

Zombie::~Zombie()
{
	static int n = 0;
	std::cout << "\n" << this->name << std::to_string(n) << " a sido eliminado." << std::endl;
	n++;
}

void Zombie::announce(void)
{
	static int n = 0;
	std::cout << this->name << std::to_string(n) << ": BraiiiiiiinnnzzzZ..." << std::endl;
	n++;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}