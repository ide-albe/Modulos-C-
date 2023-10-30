#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	int N = 10;

	horde = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}