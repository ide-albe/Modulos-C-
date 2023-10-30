#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << (*this->the_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->the_weapon = &weapon;
}