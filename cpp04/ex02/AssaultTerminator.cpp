/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:45:24 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:46:54 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(){
    std::cout<< "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &t){
    (void)t;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &t){
    (void)t;
    std::cout<< "Aaaargh..." << std::endl;
    std::cout << "* teleports from space *" << std::endl;
    return *this;
}

AssaultTerminator *AssaultTerminator::clone() const{
    return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* Attacks with a chainfists *" << std::endl;
}