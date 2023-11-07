#include "Dog.hpp"

Dog::Dog()
{
	type = "puppy";
	this->brain = new Brain;
	std::cout << "Dog is coming!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "guau guau" << std::endl; 
}

Brain *Dog::getBrain() const
{
	return this->brain;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout << "Dog Assignation operator called" << std::endl;
	return *this;
}

Dog::Dog(const Dog &copia)
{
	this->type = copia.type;
	std::cout << "Dog copy called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog is leaving!" << std::endl;
}