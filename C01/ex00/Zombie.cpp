#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

Zombie::~Zombie()
{
	std::cout << this->name << " a sido eliminado." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->set_name(name);
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
