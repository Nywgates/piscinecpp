/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:01:20 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:04:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){
    
}

Sorcerer::Sorcerer(const Sorcerer &s):
    _name(s._name), _title(s._title)
{
    std::cout << get_name() << ", "
        << get_title() << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string Name, std::string Title):_name(Name), _title(Title)
{
    std::cout << get_name() << ", "<< get_title() << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(){
    std::cout << get_name() << ", "<< get_title() << ", is dead. Consequences will never be the same !" << std::endl;
}

void Sorcerer::polymorph(Victim const &Victim) const{
    Victim.getPolymorphed();
}

std::string Sorcerer::get_name() const{
    return (_name);
}

std::string Sorcerer::get_title() const{
    return (_title);
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &Sorcerer)
{
    return out << "I am " << Sorcerer.get_name() << ", "
        << Sorcerer.get_title() << ", and I like ponies !"
        << std::endl;
}