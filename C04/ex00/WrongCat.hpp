#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:

	public:
		WrongCat();
		~WrongCat();
		WrongCat& operator=(const WrongCat& other);
		WrongCat(const WrongCat &copia);
		void makeSound() const;
};

#endif