#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " constructor was called\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " was destroyed\n";
}

void ClapTrap::attack( const std::string &target) {
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage( unsigned int amount ) {
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage\n";
    std::cout << "ClapTrap " << _name << " has now " << _hitPoints << " hitpoints\n";
}

void ClapTrap::beRepaired( unsigned int amount ) {
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " gained " << amount << " hitpoints\n";
    std::cout << "ClapTrap " << _name << " has now " << _hitPoints << " hitpoints\n";
}