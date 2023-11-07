#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria {
	private:

	public:
		AMateria();
		AMateria(std::string const & type);
		~AMateria();
		AMateria& operator=(const AMateria& other);
		AMateria(const AMateria &copia);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif