/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:58:03 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:07:01 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy("Super Mutant", 170){
   std::cout << "Gaaah. Me want smash heads !" << std::endl; 
}

SuperMutant::~SuperMutant(){
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &a):
Enemy(a.getType(), a.getHP()){
    
}

SuperMutant &SuperMutant::operator=(const SuperMutant &a)
{
    setType(a.getType());
    setHP(a.getHP());
    return *this;
}

void SuperMutant::takeDamage(int dmg){
    setHP(getHP() - (dmg - 3));
}