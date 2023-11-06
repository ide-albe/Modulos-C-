#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	private:
		int FixedPoint;
		static const int in_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copia);
		Fixed& operator=( const Fixed& other );
		Fixed(const int num);
		Fixed(const float num);
		int	toInt( void ) const;	
		float toFloat( void ) const;
} ;
	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif