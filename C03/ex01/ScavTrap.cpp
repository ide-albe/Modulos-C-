#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string character_name) : ClapTrap(character_name)
{
	this->name = character_name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	this->name = "";
	this-> hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_dmg = other.attack_dmg;
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copia)
{
	this->name = "";
	this->hit_points = copia.hit_points;
	this->energy_points = copia.energy_points;
	this->attack_dmg = copia.attack_dmg;
	std::cout << "ScavTrap Constructor copy called" << std::endl;
}