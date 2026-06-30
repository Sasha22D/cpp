#include "Cat.hpp"

Cat::Cat() : Animal() {
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat ctor\n";
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat dtor\n";
}

void Cat::makeSound() {
    std::cout << getType() << " meows\n";
}