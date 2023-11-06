#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
	protected:
		std::string name;
		int hit_points;
		unsigned int energy_points;
		unsigned int attack_dmg;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& other);
		ClapTrap(const ClapTrap &copia);
		ClapTrap(std::string character_name);
		void set_hitpoints(unsigned int attack_dmg);
		void	set_attackdmg(unsigned int amount);
		const std::string getname();
		int get_attackdmg();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif