/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:37:39 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 13:34:13 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string v_name, Weapon &v_weapon) : _name(v_name), _weapon(v_weapon){}
void	HumanA::attack(){
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &v_weapon){
	_weapon = v_weapon;
}
