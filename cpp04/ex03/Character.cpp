/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:26:45 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 13:13:49 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
:_name(name){
    for (int i = 0; i < 4; i++)
        _inv[i] = NULL;
}

Character::~Character(){
}

Character::Character(const Character &c)
:_name(c._name){
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i]->clone();
}

Character &Character::operator=(const Character &c){
    for (int i = 0; i < 4; i++)
        delete _inv[i];
    for (int i = 0; i < 4; i++)
        _inv[i] = c._inv[i]->clone();
	_name = c._name;
    return *this;
}

std::string const &Character::getName() const{
	return (_name);
}

void Character::equip(AMateria *m){
	for (int i = 0; i < 4; i++) {
    	if (_inv[i] == NULL) {
			_inv[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return ;
	_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx > 3 || !_inv[idx])
        return;
	_inv[idx]->use(target);
}