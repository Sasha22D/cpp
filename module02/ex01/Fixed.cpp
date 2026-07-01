#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int value ) {
	_fixed_point = value << _fractional_bits;
}

Fixed::Fixed( const float value ) {
	_fixed_point = roundf(value * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed& other) {
	_fixed_point = other.getRawBits();
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		_fixed_point = other.getRawBits();
	}
	std::cout << "Copy assignment operator called\n";
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return _fixed_point;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called\n";
	_fixed_point = raw;
}

float Fixed::toFloat() const {
	return static_cast<float>(_fixed_point / 1 << _fractional_bits);
}

int Fixed::toInt() const {
	return _fixed_point >> _fractional_bits;
}