#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria{
	private:
		std::string type;
	public:
		Ice();
		Ice(std::string const & type);
		~Ice();
		Ice& operator=(const Ice& other);
		Ice(const Ice &copia);
		std::string const & getType() const;
		Ice *clone() const;
};

#endif