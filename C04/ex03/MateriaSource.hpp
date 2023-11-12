#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	public:
		MateriaSource();
		MateriaSource( const MateriaSource &m );
		~MateriaSource();
		MateriaSource &operator=( const MateriaSource &m );

		// void learnMateria( AMateria* m );
		// AMateria* createMateria( std::string const &type );
};

#endif