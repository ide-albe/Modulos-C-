#include "Character.hpp"

Character::Character()
{
	this->name = "";
	for(int i = 0; i < 4; i++)
		this->slot[i] = NULL;
	std::cout << "Character constructor called!" << std::endl;
}

Character::Character(const std::string &name_to_put)
{
	this->name = name_to_put;
	for(int i = 0; i < 4; i++)
		this->slot[i] = NULL;
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
		for(int i = 0; i < 4; i++)
		this->slot[i] = copia.slot[i]->clone();
	std::cout << "Character copy called" << std::endl;
}

Character::~Character()
{
		for(int i = 0; i < 4; i++)
			delete this->slot[i];
	std::cout << "Character destructor called!" << std::endl;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->slot[i])
		{ 
			this->slot[i] = m;
			std::cout << this->name << " have equiped " << m->getType() << ".\n";
			return ;
		}
	}
	std::cout << this->name << "can't equip " << m->getType() << ".\n";
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->slot[idx])
	{ 
		std::cout << this->name << " unequiped " << this->slot[idx]->getType() << ".\n";
		this->slot[idx] = NULL;
		return ;
	}
	std::cout << this->name << " can't unequip this!\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->slot[idx])
	{
		this->slot[idx]->use(target);
		std::cout << this->name << " used " << this->slot[idx]->getType()  << "!\n";
	}
}