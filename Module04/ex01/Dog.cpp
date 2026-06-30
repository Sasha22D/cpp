#include "Dog.hpp"

Dog::Dog() : Animal() {
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog ctor\n";
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Dog dtor\n";
}

void Dog::makeSound() {
    std::cout << getType() << " barks\n";
}