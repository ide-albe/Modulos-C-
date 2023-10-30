#include "Zombie.hpp"


int main(void)
{
	Zombie *zombie_heap;
	zombie_heap = newZombie("zombie_heap");
	zombie_heap->announce();
	randomChump("zombie_stack");

	delete zombie_heap;
	return 0;
}