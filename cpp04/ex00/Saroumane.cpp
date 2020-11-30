/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Saroumane.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:34:28 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:06:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Saroumane.hpp"

Saroumane::Saroumane(){
}

Saroumane::Saroumane(std::string Name):Victim(Name){
    std::cout << "Le blanc" << std::endl;
}

Saroumane::Saroumane(const Saroumane &p): Victim(p._name)
{
    std::cout << "Le Blanc." << std::endl;
}

Saroumane::~Saroumane(){
    std::cout << "Le Blanc." << std::endl;
}

void Saroumane::getPolymorphed() const {
    std::cout << get_name() << " was just polymorphed in a BALROG !" << std::endl;
}
