#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const int value ) {
	std::cout << "Int ctor\n";
	_fixed_point = value << _fractional_bits;
}

Fixed::Fixed( const float value ) {
	std::cout << "Float ctor\n";
	_fixed_point = roundf(value * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called\n";
	_fixed_point = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called\n";
	if (this != &other) {
		_fixed_point = other.getRawBits();
	}
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
	return static_cast<float>(_fixed_point) / (1 << _fractional_bits);
}

int Fixed::toInt() const {
	return _fixed_point >> _fractional_bits;
}

std::ostream& operator<<(std::ostream &out, const Fixed &point) {
	out << point.toFloat();
	return out;
}

int Fixed::operator>( const Fixed& right ) {
	return this->getRawBits() > right.getRawBits();
}

int Fixed::operator<( const Fixed& right ) {
	return this->getRawBits() < right.getRawBits();
}

int Fixed::operator>=( const Fixed& right ) {
	return this->getRawBits() >= right.getRawBits();
}

int Fixed::operator<=( const Fixed& right ) {
	return this->getRawBits() <= right.getRawBits();
}

int Fixed::operator==( const Fixed& right ) {
	return this->getRawBits() == right.getRawBits();
}

int Fixed::operator!=( const Fixed& right ) {
	return this->getRawBits() != right.getRawBits();
}

Fixed Fixed::operator+( const Fixed& right ) {
	float result;
	result = this->toFloat() + right.toFloat();
	return Fixed(result);
}

Fixed Fixed::operator-( const Fixed& right ) {
	float result;
	result = this->toFloat() - right.toFloat();
	return Fixed(result);
}

Fixed Fixed::operator*( const Fixed& right ) {
	float result;
	result = this->toFloat() * right.toFloat();
	return Fixed(result);
}

Fixed Fixed::operator/( const Fixed& right ) {
	float result;
	result = this->toFloat() / right.toFloat();
	return Fixed(result);
}

Fixed& Fixed::operator++() {
	_fixed_point++;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed temp = *this;
	operator++();
	return temp;
}

Fixed& Fixed::operator--() {
	_fixed_point--;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed temp = *this;
	operator--();
	return temp;
}

Fixed& Fixed::max( Fixed& left, Fixed& right ) {
	if (left.toFloat() > right.toFloat())
		return left;
	else
		return right;
}

const Fixed& Fixed::max( const Fixed& left, const Fixed& right ) {
	if (left.toFloat() > right.toFloat())
		return left;
	else
		return right;
}

Fixed& Fixed::min( Fixed& left, Fixed& right ) {
	if (left.toFloat() < right.toFloat())
		return left;
	else
		return right;
}

const Fixed& Fixed::min( const Fixed& left, const Fixed& right ) {
	if (left.toFloat() < right.toFloat())
		return left;
	else
		return right;
}