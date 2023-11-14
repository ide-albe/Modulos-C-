#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria{
	private:

	public:
		Ice();
		Ice(const Ice &copia);
		~Ice();
		Ice& operator=(const Ice& other);

		std::string const & getType() const;
	
		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};

#endif