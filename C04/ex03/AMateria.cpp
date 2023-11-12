#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "";
	std::cout << "AMateria constructor called!" << std::endl;
}

AMateria::AMateria( std::string const &type )
{
	this->type = type;
	std::cout << "Created AMateria:" << this->type << "!" << std::endl;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this == &other)
		return *this;
	std::cout << "AMateria Assignation operator called" << std::endl;
	return *this;
}

AMateria::AMateria(const AMateria &copia)
{
	(void)copia;
	std::cout << "AMateria copy called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called!" << std::endl;
}