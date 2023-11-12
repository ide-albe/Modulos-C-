#include "Character.hpp"

Character::Character()
{
	this->name = "";
	std::cout << "Character constructor called!" << std::endl;
}

Character::Character(const std::string &name_to_put)
{
	this->name = name_to_put;
	std::cout << "Character constructor called!" << std::endl;
}

std::string const &Character::getName() const
{
	return this->name;
}

Character& Character::operator=(const Character& other)
{
	if (this == &other)
		return *this;
	std::cout << "Character Assignation operator called" << std::endl;
	return *this;
}

Character::Character(const Character &copia)
{
	this->name = copia.name;
	std::cout << "Character copy called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called!" << std::endl;
}