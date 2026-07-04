#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal ctor\n";
}

Animal::Animal( const Animal& other ) {
    std::cout << "Animal copy ctor\n";
    _type = other._type;
}

Animal& Animal::operator=( const Animal& other ) {
    std::cout << "Animal copy assignment ctor\n";
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal dtor\n";
}

void Animal::makeSound() {
    std::cout << "Animal makes sound\n";
}

const std::string& Animal::getType() const {
    return _type;
}