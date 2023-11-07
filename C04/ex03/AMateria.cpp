#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "A_Materia constructor called!" << std::endl;
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
	std::cout << "AMateria copy called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called!" << std::endl;
}