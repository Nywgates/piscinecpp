/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:34:28 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:06:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(){
}

Peon::Peon(std::string Name):Victim(Name){
    std::cout << "Zog Zog" << std::endl;
}

Peon::Peon(const Peon &p): Victim(p._name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(){
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << get_name() << " was just polymorphed in a pink pony !" << std::endl;
}
