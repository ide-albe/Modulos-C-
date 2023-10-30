#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), the_weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->the_weapon.getType() << std::endl;
}