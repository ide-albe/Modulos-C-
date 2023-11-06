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
	//ex00
		Fixed();
		~Fixed();
		Fixed(const Fixed &copia);
		Fixed& operator=( const Fixed& other );
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
	//ex01
		Fixed(const int num);
		Fixed(const float num);
		int	toInt( void ) const;	
		float toFloat( void ) const;
	//ex02
		Fixed& operator>( const Fixed& other );
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int );
		static const Fixed& min(const Fixed& one, const Fixed& two);
		static Fixed& min(Fixed& one, Fixed& two);
		static const Fixed& max(const Fixed& one, const Fixed& two);
		static Fixed& max(Fixed& one, Fixed& two);
} ;
	std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif