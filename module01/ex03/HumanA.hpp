#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;
public:
	HumanA( std::string name, Weapon &new_weapon );
	~HumanA();
	void		attack();
	void		setWeapon( Weapon new_weapon );
	std::string	getName() const;
	void		setName( std::string name );
};

#endif