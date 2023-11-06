#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "FragTrap Constructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "high five guys!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string character_name) : ClapTrap(character_name)
{
	this->name = character_name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	this->name = "";
	this-> hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_dmg = other.attack_dmg;
	std::cout << "FragTrap Assignation operator called" << std::endl;
	return *this;
}

FragTrap::FragTrap(const FragTrap &copia)
{
	this->name = "";
	this->hit_points = copia.hit_points;
	this->energy_points = copia.energy_points;
	this->attack_dmg = copia.attack_dmg;
	std::cout << "FragTrap Constructor copy called" << std::endl;
}