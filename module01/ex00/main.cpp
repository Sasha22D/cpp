#include "Zombie.hpp"

int main() {
	Zombie zomblard = Zombie("zozo");
	zomblard.announce();

	Zombie* zomblard2 = newZombie("zaza");
	zomblard2->announce();
	randomChump("zizi");
}