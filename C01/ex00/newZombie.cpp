#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *the_zombie = new Zombie;
	the_zombie->set_name(name);
	return(the_zombie);
}