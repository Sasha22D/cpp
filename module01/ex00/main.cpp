#include "Zombie.hpp"

int main() {
	Zombie zomblard = Zombie("1");
	zomblard.announce();

	Zombie* zomblard2 = newZombie("2");
	zomblard2->announce();
	randomChump("3");
	delete zomblard2;
}