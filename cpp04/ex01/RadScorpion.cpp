/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:03:22 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:06:57 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion():Enemy("RadScorpion", 80){
   std::cout << "* click click click *" << std::endl; 
}

RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &a):
Enemy(a.getType(), a.getHP()){
    
}

RadScorpion &RadScorpion::operator=(const RadScorpion &a)
{
    setType(a.getType());
    setHP(a.getHP());
    return *this;
}

void RadScorpion::takeDamage(int dmg){
    setHP(getHP() - (dmg - 3));
}