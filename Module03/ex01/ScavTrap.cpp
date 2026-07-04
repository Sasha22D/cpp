#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    std::cout << "ScavTrap ctor\n";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap(other) {
    std::cout << "ScavTrap copy ctor\n";
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
    std::cout << "ScavTrap copy assignement ctor\n";
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap dtor\n";
}

void ScavTrap::attack( const std::string &target) {
    if (_hitPoints == 0) {
        std::cout << "ScavTrap " << _name << " can\'t attack since it has no HP\n";
        return ;
    }
    if (_energyPoints == 0) {
        std::cout << "ScavTrap " << _name << " can\'t attack since it has no energy\n";
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
    _energyPoints--;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!\n";
}