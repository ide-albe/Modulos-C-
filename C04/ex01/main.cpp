#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* perro = new Dog();
	const Animal* gato = new Cat();

	std::string ideaN10 = perro->getBrain()->getIdea(10);

	std::cout << ideaN10 << std::endl;

	delete perro;//should not create a leak
	delete gato;
	std::cout << "NO LEAKS SHOULD BE FOUND!\n";
	system("leaks -q brain");
	return 0;
}
