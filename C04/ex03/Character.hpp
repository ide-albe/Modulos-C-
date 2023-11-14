#ifndef CHARACTER_HPP
# define CHARACTER _HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter {

	protected:
		std::string name;
		AMateria *slot[4];
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &copia);
		~Character();
		Character& operator=(const Character& other);
	
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif