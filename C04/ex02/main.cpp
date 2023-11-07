#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	//NO SERIA POSIBLE CREAR UN OBJETO DE LA CLASE ANIMAL YA QUE ES UNA CLASE ABSTRACTA, Y ESTE TIPO
	//DE CLASES SE USAN PARA CREAR SUBCLASES  DE LAS CUALES SI PUEDES CREAR OBJETOS DE ELLAS,
	//COMO DOG Y CAT.
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