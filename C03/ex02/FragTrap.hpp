#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private:

	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string character_name);
		FragTrap& operator=(const FragTrap& other);
		FragTrap(const FragTrap &copia);
		void highFivesGuys();
};

#endif