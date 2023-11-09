#include "Character.hpp"

Character::Character()
{
	this->type = "";
	std::cout << "Character constructor called!" << std::endl;
}

std::string const & Character::getType() const
{
	return this->type;
}

Character& Character::operator=(const Character& other)
{
	if (this == &other)
		return *this;
	std::cout << "Character Assignation operator called" << std::endl;
	return *this;
}

Character::Character(const AMateria &copia)
{
	(void)copia;
	std::cout << "Character copy called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called!" << std::endl;
}