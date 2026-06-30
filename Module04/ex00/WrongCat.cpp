#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    _type = "WrongCat";
    std::cout << "WrongCat ctor\n";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat dtor\n";
}

void WrongCat::makeSound() {
    std::cout << getType() << " meows\n";
}