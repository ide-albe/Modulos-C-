#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "randomWrongAnimal";
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

const std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal haciendo ruido" << std::endl; 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copia)
{
	this->type = copia.type;
	std::cout << "WrongAnimal Constructor copy called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}