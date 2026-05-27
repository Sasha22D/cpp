#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie new_zombie = Zombie(name);
	Zombie* ptr = &new_zombie;
	return ptr;
}