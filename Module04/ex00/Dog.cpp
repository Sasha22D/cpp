#include "Dog.hpp"

Dog::Dog() : Animal() {
    _type = "Dog";
    std::cout << "Dog ctor\n";
}

Dog::~Dog() {
    std::cout << "Dog dtor\n";
}

void Dog::makeSound() {
    std::cout << getType() << " barks\n";
}