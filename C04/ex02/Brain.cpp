#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i <= 100; i++)
		this->ideas[i] = "Ideas";
	std::cout << "Brain Constructor called!" << std::endl;
}

std::string Brain::getIdea(int index)
{
	if (index >= 0 && index < 100)
		return this->ideas[index];
	return "";
}


Brain& Brain::operator=(const Brain& other)
{
	if (this == &other)
		return *this;
	std::cout << "Brain Assignation operator called" << std::endl;
	return *this;
}

Brain::Brain(const Brain &copia)
{
	(void)copia;
	std::cout << "Brain copy called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "No brain anymore!" << std::endl;
}