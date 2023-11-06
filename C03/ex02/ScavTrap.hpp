#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:

	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string character_name);
		ScavTrap& operator=(const ScavTrap& other);
		ScavTrap(const ScavTrap &copia);
		void guardGate();
};

#endif