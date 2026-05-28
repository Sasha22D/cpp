#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* z_array = new Zombie[N];
	for (int i = 0; i < N; i++) {
		z_array[i].setName(name);
	}
	return z_array;
}