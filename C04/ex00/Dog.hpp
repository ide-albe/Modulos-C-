#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal {
	private:

	public:
		Dog();
		~Dog();
		Dog& operator=(const Dog& other);
		Dog(const Dog &copia);
		void makeSound() const;
};

#endif