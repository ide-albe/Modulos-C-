#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called!" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this == &other)
		return *this;
	std::cout << "MateriaSource Assignation operator called" << std::endl;
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource &copia)
{
	(void)copia;
	std::cout << "MateriaSource copy called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called!" << std::endl;
}