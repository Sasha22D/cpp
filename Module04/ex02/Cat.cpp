#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat ctor\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat( const Cat& other ) : Animal(other) {
	std::cout << "Cat copy ctor\n";
	_brain = other._brain;
}

Cat& Cat::operator=( const Cat& other ) {
	std::cout << "Cat copy assignment ctor\n";
	if (this != &other) {
		Animal::operator=(other);
		_brain = other._brain;
	}
}

Cat::~Cat() {
	std::cout << "Cat dtor\n";
	delete _brain;
}

void Cat::makeSound() const {
	std::cout << getType() << " meows\n";
}