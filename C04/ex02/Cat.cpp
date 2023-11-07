#include "Cat.hpp"

Cat::Cat()
{
	type = "black cat";
	this->brain = new Brain;
	std::cout << "Cat is coming!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miau miau" << std::endl; 
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout << "Cat Assignation operator called" << std::endl;
	return *this;
}

Cat::Cat(const Cat &copia)
{
	this->type = copia.type;
	std::cout << "Cat copy called" << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat is leaving!" << std::endl;
}