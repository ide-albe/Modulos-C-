#include "Fixed.hpp"

//CPP02 ex00

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

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->FixedPoint);
}

void Fixed::setRawBits ( int const raw )
{
	this->FixedPoint = raw;
}

//CPP02 ex01

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

//CPP02 ex02

bool Fixed::operator>(const Fixed& other) const
{
	return (this->FixedPoint > other.toFloat());
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->FixedPoint < other.toFloat());
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->FixedPoint >= other.toFloat());
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->FixedPoint <= other.toFloat());
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->FixedPoint == other.toFloat());
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->FixedPoint != other.toFloat());
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return this->toFloat() / other.toFloat();
}

Fixed& Fixed::operator++( void )
{
	this->FixedPoint++;
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed temp(*this);
	this->FixedPoint++;
	return temp;
}

Fixed& Fixed::operator--( void )
{
	this->FixedPoint--;
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed temp(*this);
	this->FixedPoint--;
	return temp;
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two)
{
	if (one.toFloat() < two.toFloat())
		return one;
	return two;
}

Fixed& Fixed::min(Fixed& one, Fixed& two)
{
	if (one.toFloat() < two.toFloat())
		return one;
	return two;
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two)
{
	if (one.toFloat() > two.toFloat())
		return one;
	return two;
}

Fixed& Fixed::max(Fixed& one, Fixed& two)
{
	if (one.toFloat() > two.toFloat())
		return one;
	return two;
}