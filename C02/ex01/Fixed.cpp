#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->entero = 0;
}

Fixed::Fixed(const int num)
{
	this->entero = num;
}

Fixed::Fixed(const float num)
{
	this->entero = num;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &copia)
{
	std::cout << "Constructor copy called" << std::endl;
	this->entero = copia.entero;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->entero = other.entero;
	return *this;
}
