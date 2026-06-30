#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal ctor\n";
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