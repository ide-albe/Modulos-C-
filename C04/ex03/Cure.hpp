#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria{
	private:
		std::string type;
	public:
		Cure();
		Cure(std::string const & type);
		~Cure();
		Cure& operator=(const Cure& other);
		Cure(const Cure &copia);
		std::string const & getType() const;
		Cure *clone() const;
};

#endif