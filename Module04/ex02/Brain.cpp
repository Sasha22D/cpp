#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain ctor\n";
}

Brain::Brain( const Brain& other ) {
	std::cout << "Brain copy ctor\n";
	for (int i = 0; i < 100; i++) {
		_ideas[i] = other._ideas[i];
	}
}

Brain& Brain::operator=( const Brain& other ) {
	std::cout << "Brain copy assignment ctor\n";
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain dtor\n";
}