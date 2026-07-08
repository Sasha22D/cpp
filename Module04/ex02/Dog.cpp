#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog ctor\n";
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog( const Dog& other ) : Animal(other) {
	std::cout << "Dog copy ctor\n";
	_brain = other._brain;
}

Dog& Dog::operator=( const Dog& other ) {
	std::cout << "Dog copy assignment ctor\n";
	if (this != &other) {
		Animal::operator=(other);
		_brain = other._brain;
	}
}

Dog::~Dog() {
	std::cout << "Dog dtor\n";
	delete _brain;
}

void Dog::makeSound() const {
	std::cout << getType() << " barks\n";
}