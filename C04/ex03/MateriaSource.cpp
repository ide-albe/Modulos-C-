#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	std::cout << "MateriaSource constructor called!" << std::endl;
}

void MateriaSource::learnMateria( AMateria* m )
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = m;
			std::cout << "MateriaSource " << m->getType() << " learned!\n";
			return ;
		}
	}
	std::cout << "MateriaSource cant learn more materias!\n";
}

AMateria* MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
		if (this->materia[i] && this->materia[i]->getType() == type)
			return this->materia[i]->clone();
	return 0;
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
	for (int i = 0; i < 4; i++)
		this->materia[i] = copia.materia[i]->clone();
	std::cout << "MateriaSource copy called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
	std::cout << "MateriaSource destructor called!" << std::endl;
}