/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:06:39 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:10:08 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name):
_name(name){
	_AP = 40;
}

Character::~Character(){
    
}

Character::Character(const Character &e)
:_name(e._name){
	_AP = e._AP;
}

Character &Character::operator=(const Character &e){
    setAP(e._AP);
    setName(e._name);
    return *this;
}

void Character::recoverAP(){
	setAP(_AP + 10);
}

void Character::equip(AWeapon *weapon){
	_weapon = weapon;
}

void Character::attack(Enemy *enemy){
	std::cout << _name << " attacks " <<
	enemy->getType() << " with a " << _weapon->getName() << " !" <<std::endl;
	setAP(_AP - _weapon->getAPCost());
	if (_weapon) {
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}

}

void Character::setAP(int AP){
    _AP = AP;
}

void Character::setName(std::string name){
    _name = name;
}

AWeapon *Character::getWeapon() const{
	return (_weapon);
}

std::string Character::getName() const {
	return (_name);
}

int	Character::getAP() const {
	return (_AP);
}

std::ostream &operator<<(std::ostream &out, const Character &Character)
{
	AWeapon *_weapon = Character.getWeapon();
	if (_weapon){
		return out << Character.getName() << " has " << Character.getAP()
			<< " AP and wields a " << _weapon->getName()
			<< std::endl;
	}
	else {
		return out << Character.getName() << " has " << Character.getAP()
			<< " AP and is unarmed"
			<< std::endl;
	}
}
