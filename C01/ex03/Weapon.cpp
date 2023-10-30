#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->setType(weaponType);
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string	const &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}