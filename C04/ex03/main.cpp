#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <stdlib.h>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* Goku = new Character("Goku");
	AMateria* tmp;
	// tmp = src->createMateria("ice");

	//AL HACER UN CREAT MATERIA DE ALGO NO EXISTENTE DA SEGFAULT!

	tmp = src->createMateria("nose");

	//////////////////////////////////////////////////////////

	//ARREGLAR Y CREAR UN MAIN PERSONALIZADO PARA COMPROBAR CADA FUNCION
	Goku->equip(tmp);
	// tmp = src->createMateria("cure");
	// Goku->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// Goku->use(0, *bob);
	// Goku->use(1, *bob);

	// delete bob;
	// delete Goku;
	// delete src;
	system("leaks -q materisa");
	return 0;
}
