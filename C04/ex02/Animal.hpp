#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
#include "Brain.hpp"

class Brain;

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal& operator=(const Animal& other);
		Animal(const Animal &copia);
		const std::string getType() const ;
		virtual void makeSound() const = 0;
		virtual Brain *getBrain() const;
};

#endif