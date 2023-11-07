#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal()
{
	this->type = "randomAnimal";
	Brain *brain;
	std::cout << "Animal Constructor called" << std::endl;
}

const std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "muchos animales haciendo ruido" << std::endl; 
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout << "Animal Assignation operator called" << std::endl;
	return *this;
}

Animal::Animal(const Animal &copia)
{
	this->type = copia.type;
	std::cout << "Animal Constructor copy called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}