#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called!" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout << "Brain Assignation operator called" << std::endl;
	return *this;
}

Brain::Brain(const Brain &copia)
{
	this->type = copia.type;
	std::cout << "Brain copy called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "No brain anymore!" << std::endl;
}