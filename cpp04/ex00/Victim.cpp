/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:18:23 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:05:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(){

}

Victim::Victim(std::string Name):_name(Name){
    std::cout << "A random victim called " << get_name() << " just appeared !" << std::endl;
}

Victim::Victim(const Victim &v): _name(v._name)
{
    std::cout << "Some random victim called "
        << get_name() << " just appeared !" << std::endl;
}

Victim::~Victim(){
    std::cout << "The victim  " << get_name() << " died for no apparent reasons !" << std::endl;
}

void Victim::getPolymorphed() const {
    std::cout << get_name() << " was just polymorphed in a cute little sheep !" << std::endl;
}

std::string Victim::get_name() const{
    return (_name);
}

std::ostream &operator<<(std::ostream &out, const Victim &Victim)
{
    return out << "I am " << Victim.get_name() << " and I like otters !"
        << std::endl;
}