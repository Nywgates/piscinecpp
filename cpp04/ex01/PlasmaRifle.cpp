/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:41:22 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 09:55:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 5, 21){
    
}

PlasmaRifle::~PlasmaRifle(){
    
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &a):
AWeapon(a.getName(), a.getAPCost(), a.getDamage()){
    
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &a)
{
    setName(a.getName());
    setAPcost(a.getAPCost());
    setDamage(a.getDamage());
    return *this;
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}