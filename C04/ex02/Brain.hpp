#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Animal;

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain& operator=(const Brain& other);
		Brain(const Brain &copia);
		std::string getIdea(int i);
};

#endif