#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // ScavTrap *trap = new ScavTrap("zozo");
    // trap->attack("zizi");
    // trap->guardGate();
    // delete trap;
    ScavTrap trap = ScavTrap("zozo");
    trap.attack("zizi");
    trap.guardGate();
    trap.takeDamage(99);
}