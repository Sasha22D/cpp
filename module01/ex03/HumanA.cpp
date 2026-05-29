#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &new_weapon ) : _name(name), _weapon(new_weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << getName() << " attacks with their " << _weapon.getType() << std::endl;
}

std::string HumanA::getName() const {
	return _name;
}

void	HumanA::setWeapon( Weapon &new_weapon ) {
	_weapon = new_weapon;
}