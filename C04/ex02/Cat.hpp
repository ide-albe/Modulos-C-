#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat& operator=(const Cat& other);
		Cat(const Cat &copia);
		void makeSound() const;

		Brain *getBrain() const;
};

#endif