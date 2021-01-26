/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:47:56 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 09:54:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():
AWeapon("Power Fist", 8, 50){
    
}

PowerFist::~PowerFist(){
    
}

PowerFist::PowerFist(const PowerFist &a):
AWeapon(a.getName(), a.getAPCost(), a.getDamage()){
    
}

PowerFist &PowerFist::operator=(const PowerFist &a)
{
    setName(a.getName());
    setAPcost(a.getAPCost());
    setDamage(a.getDamage());
    return *this;
}

void PowerFist::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}