#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	setName(name);
}

Zombie::~Zombie() {
	std::cout << _name;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::getName() const {
	return _name;
}

void	Zombie::setName( std::string name ) {
	_name = name;
}