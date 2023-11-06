#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->FixedPoint = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->FixedPoint = other.FixedPoint;
	return *this;
}

Fixed::Fixed(const Fixed &copia)
{
	std::cout << "Constructor copy called" << std::endl;
	this->FixedPoint = copia.FixedPoint;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->FixedPoint = num << this->in_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->FixedPoint = roundf(num * (1 << this->in_bits));
}

int	Fixed::toInt( void ) const
{
	return (this->FixedPoint >> this->in_bits);
}

float Fixed::toFloat( void ) const 
{
	float num = static_cast<float>(this->FixedPoint) / (1 << this->in_bits);
	return num;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}