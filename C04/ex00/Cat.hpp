#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal {
	private:

	public:
		Cat();
		~Cat();
		Cat& operator=(const Cat& other);
		Cat(const Cat &copia);
		void makeSound() const;

};

#endif