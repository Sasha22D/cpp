#include "Cat.hpp"

Cat::Cat() : Animal() {
    _type = "Cat";
    std::cout << "Cat ctor\n";
}

Cat::~Cat() {
    std::cout << "Cat dtor\n";
}

void Cat::makeSound() {
    std::cout << getType() << " meows\n";
}