#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " constructor was called\n";
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
    std::cout << "Copy ctor\n";
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
    std::cout << "Copy assignement ctor\n";
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " was destroyed\n";
}

void ClapTrap::attack( const std::string &target) {
    if (_hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " can\'t attack since it has no HP\n";
        return ;
    }
    if (_energyPoints == 0) {
        std::cout << "ClapTrap " << _name << " can\'t attack since it has no energy\n";
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
    _energyPoints--;
}

void ClapTrap::takeDamage( unsigned int amount ) {
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " points of damage\n";
    std::cout << "ClapTrap " << _name << " has now " << _hitPoints << " hitpoints\n";
}

void ClapTrap::beRepaired( unsigned int amount ) {
    if (_hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " can\'t be repaired since it has no HP\n";
        return ;
    }
    if (_energyPoints == 0) {
        std::cout << "ClapTrap " << _name << " can\'t be repaired since it has no energy\n";
        return ;
    }
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " gained " << amount << " hitpoints\n";
    std::cout << "ClapTrap " << _name << " has now " << _hitPoints << " hitpoints\n";
}