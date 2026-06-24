#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie() {
	std::cout << _name << " is destroyed\n";
}

void	Zombie::announce() {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::getName() const {
	return _name;
}