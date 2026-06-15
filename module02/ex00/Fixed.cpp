#include "Fixed.hpp"

Fixed::Fixed(/* args */): _fixed_point(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->_fixed_point = other.getRawBits();
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