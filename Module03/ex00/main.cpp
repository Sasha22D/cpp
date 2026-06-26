#include "ClapTrap.hpp"

int main() {
    ClapTrap* trap = new ClapTrap("zozo");
    trap->attack("zizi");
    trap->takeDamage(8);
    trap->beRepaired(7);
    delete trap;
}