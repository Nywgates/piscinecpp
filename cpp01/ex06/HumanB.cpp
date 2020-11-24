/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:37:39 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 10:56:32 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	_name = name;
	_weapon = NULL;
}

void	HumanB::attack(){
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &v_weapon){
	_weapon = &v_weapon;
}