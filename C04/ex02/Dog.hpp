#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog& operator=(const Dog& other);
		Dog(const Dog &copia);
		void makeSound() const;

		Brain *getBrain() const;
};

#endif