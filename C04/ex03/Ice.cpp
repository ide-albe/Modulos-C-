#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << "ice constructor called!" << std::endl;
}

std::string const & Ice::getType() const
{
	return this->type;
}

Ice *Ice::clone() const
{
	Ice *new_obj = new Ice;
	return new_obj;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	if (this == &other)
		return *this;
	std::cout << "ice Assignation operator called" << std::endl;
	return *this;
}

Ice::Ice(const Ice &copia)
{
	(void)copia;
	std::cout << "ice copy called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "ice destructor called!" << std::endl;
}