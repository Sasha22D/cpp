#include "Zombie.hpp"

int main() {
	Zombie*	array = zombieHorde(5, "zozo");

	for (int i = 0; i < 5; i++) {
		array[i].announce();
	}
	delete[] array;
}