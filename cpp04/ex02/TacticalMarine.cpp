/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:43:26 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:45:06 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
    std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine(){
    std::cout<< "Aaaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &t){
    (void)t;
    std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &t){
    (void)t;
    std::cout<< "Aaaargh..." << std::endl;
    std::cout << "Tactical Marine ready for action !" << std::endl;
    return *this;
}

TacticalMarine *TacticalMarine::clone() const{
    return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const {
    std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "*Attacks with a bolter*" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "*Attacks with a chainsword*" << std::endl;
}