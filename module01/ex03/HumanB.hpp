#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB( std::string name );
	~HumanB();
	void	setWeapon( Weapon new_weapon );
	void	attack();
	std::string getName() const;
	void	setName( std::string name );
};

#endif