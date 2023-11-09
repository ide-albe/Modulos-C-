#ifndef CHARACTER_HPP
# define CHARACTER _HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Character {
	protected:
		const std::string type;
	public:
		Character();
		Character(std::string const & type);
		~Character();
		AMateria& operator=(const Character& other);
		Character(const Character &copia);

		virtual void use(ICharacter& target);
};

#endif