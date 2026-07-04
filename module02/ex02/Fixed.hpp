#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_fixed_point;
	static const int _fractional_bits = 8;
public:
	Fixed( void );
	Fixed( const int value );
	Fixed( const float value );
	Fixed(const Fixed& other);
	Fixed& operator=( const Fixed& other );
	~Fixed( void );
	int	getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	bool operator>( const Fixed& right ) const ;
	bool operator<( const Fixed& right ) const ;
	bool operator>=( const Fixed& right ) const ;
	bool operator<=( const Fixed& right ) const ;
	bool operator==( const Fixed& right ) const ;
	bool operator!=( const Fixed& right ) const ;

	Fixed operator+( const Fixed& right ) const ;
	Fixed operator-( const Fixed& right ) const ;
	Fixed operator*( const Fixed& right ) const ;
	Fixed operator/( const Fixed& right ) const ;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	
	static Fixed& max( Fixed& left, Fixed& right );
	static const Fixed& max( const Fixed& left, const Fixed& right );
	static Fixed& min( Fixed& left, Fixed& right );
	static const Fixed& min( const Fixed& left, const Fixed& right );
};
std::ostream& operator<<(std::ostream &out, const Fixed &point);


#endif