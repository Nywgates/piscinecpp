/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:33:41 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 10:54:40 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	setType(type);
}

const std::string &Weapon::getType(){
	return _type;
}

void Weapon::setType(std::string type){
	_type = type;
}