#include "Zombie.hpp"
#include <memory>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombs = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombs[i].set_name(name);
	}
	return (zombs);
}