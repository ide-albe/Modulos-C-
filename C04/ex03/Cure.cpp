#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
	std::cout << "Cure constructor called!" << std::endl;
}

std::string const & Cure::getType() const
{
	return this->type;
}

AMateria* Cure::clone() const
{
	Cure *new_obj = new Cure;
	return new_obj;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this == &other)
		return *this;
	std::cout << "Cure Assignation operator called" << std::endl;
	return *this;
}

// Cure::Cure(const Cure &copia)
// {
// 	(void)copia;
// 	std::cout << "Cure copy called" << std::endl;
// }

Cure::~Cure()
{
	std::cout << "Cure destructor called!" << std::endl;
}