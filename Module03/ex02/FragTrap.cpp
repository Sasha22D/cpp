#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap ctor\n";
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap(other) {
    std::cout << "FragTrap copy ctor\n";
}

FragTrap& FragTrap::operator=( const FragTrap& other ) {
    std::cout << "FragTrap copy assignment ctor\n";
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap dtor\n";
}

void FragTrap::highFiveGuys() {
    std::cout << "FragTrap " << _name << " wants a high five\n";
}