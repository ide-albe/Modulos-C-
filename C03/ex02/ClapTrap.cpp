#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "";
	this-> hit_points = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->name = "";
	this-> hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_dmg = other.attack_dmg;
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(std::string character_name)
{
	this->name = character_name;
	this-> hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "ClapTrap Named constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copia)
{
	this->name = "";
	this-> hit_points = copia.hit_points;
	this->energy_points = copia.energy_points;
	this->attack_dmg = copia.attack_dmg;
	std::cout << "ClapTrap Constructor copy called" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points > 0)
		std::cout << this->name << " receives damage! HP now is: " << this->hit_points << std::endl;
	else if (this->hit_points <= 0)
	{
		std::cout << this->name << " receives damage! Is dead!" << std::endl;
	}
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points > 0)
	{
		std::cout << "ClapTrap " <<	this->name << " attacks " << target;
		this->energy_points -= 1;
		std::cout << ", causing " << this->attack_dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}

const std::string ClapTrap::getname()
{
	return this->name;
}

int ClapTrap::get_attackdmg()
{
	return this->attack_dmg;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0)
	{
		if (this->hit_points <= 0)
		{
			std::cout << "Can't heal up ." << this->name << " is dead!" << std::endl;
			exit(1);
		}
		if (this->hit_points + amount > 100)
		{
			std::cout << this->name << " heals up " << 100 - this->hit_points  << " points.";
			this->hit_points = 100;
			std::cout << " MAX is 100HP!" << std::endl;
		}
		if (this->hit_points > 0 && !(this->hit_points + amount > 100))
		{
			this->hit_points = this->hit_points + amount;
			std::cout << this->name << " heals up " << amount << " points. HP:" << this->hit_points << std::endl;
			this->energy_points -= 1;
		}
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}

void	ClapTrap::set_attackdmg(unsigned int amount)
{
	this->attack_dmg = amount;
}



ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}