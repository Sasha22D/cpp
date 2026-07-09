#include "Cat.hpp"

Cat::Cat() : Animal() {
    _type = "Cat";
    std::cout << "Cat ctor\n";
}

Cat::Cat( const Cat& other ): Animal(other) {
    std::cout << "Cat copy ctor\n";
}

Cat& Cat::operator=( const Cat& other ) {
    std::cout << "Cat copy assignment ctor\n";
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat dtor\n";
}

void Cat::makeSound() const {
    std::cout << getType() << " meows\n";
}