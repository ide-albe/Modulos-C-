#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Wrong black cat";
	std::cout << "WrongCat is coming!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "guau guau" << std::endl; 
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	std::cout << "WrongCat Assignation operator called" << std::endl;
	return *this;
}

WrongCat::WrongCat(const WrongCat &copia)
{
	this->type = copia.type;
	std::cout << "WrongCat copy called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is leaving!" << std::endl;
}