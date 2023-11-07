#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	//WRONG ONES-
	std::cout << "\n" << "WRONG ONES NOW----->\n\n";
	const WrongAnimal* one = new WrongAnimal();
	const WrongAnimal* two = new WrongCat();
	std::cout << one->getType() << " " << std::endl;
	std::cout << two->getType() << " " << std::endl;
	one->makeSound(); //will output the cat sound!
	two->makeSound();

	return 0;
}
