#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{

	private:
		std::string name;
		int			zomb_num;
	public:
		Zombie();
		~Zombie();
		void announce( void );
		void set_name( std::string name );
};

	Zombie* zombieHorde( int N, std::string name );
	void increase_num(void);

#endif