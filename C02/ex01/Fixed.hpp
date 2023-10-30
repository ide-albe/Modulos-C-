#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
	private:
		int entero;
		static const int in_bits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(Fixed &copia);
		~Fixed();
		Fixed& operator=( const Fixed& other );
} ;

#endif