#include "Dog.hpp"

Dog::Dog() : Animal() {
    _type = "Dog";
    std::cout << "Dog ctor\n";
}

Dog::Dog( const Dog& other ): Animal(other) {
    std::cout << "Dog copy ctor\n";
}

Dog& Dog::operator=( const Dog& other ) {
    std::cout << "Dog copy assignment ctor\n";
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog dtor\n";
}

void Dog::makeSound() const {
    std::cout << getType() << " barks\n";
}