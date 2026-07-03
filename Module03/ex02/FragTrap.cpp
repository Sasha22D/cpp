#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    _hitPoints = 110;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap ctor\n";
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap dtor\n";
}

void FragTrap::highFiveGuys() {
    std::cout << "FragTrap " << _name << " wants a high five\n";
}