#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal ctor\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal dtor\n";
}

void WrongAnimal::makeSound() {
    std::cout << "WrongAnimal makes sound\n";
}

const std::string& WrongAnimal::getType() const {
    return _type;
}