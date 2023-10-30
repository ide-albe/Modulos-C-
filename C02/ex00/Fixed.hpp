#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
	private:
		int	entero;
		static const int in_bits = 8;
	public:2
		Fixed();
		Fixed(Fixed &copia);
		~Fixed();
		Fixed& operator=( const Fixed& other );
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
} ;

#endif