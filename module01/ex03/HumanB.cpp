#include "HumanB.hpp"

HumanB::HumanB( std::string name ) {
	setName(name);
}

HumanB::~HumanB() {}

void	HumanB::setWeapon( Weapon new_weapon ) {
	_weapon = &new_weapon;
}

void	HumanB::attack() {
	std::cout << getName() << " attacks with their " << _weapon->getType();
}

std::string HumanB::getName() const {
	return _name;
}

void	HumanB::setName( std::string name ) {
	_name = name;
}