/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:07:15 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 13:12:03 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type):
_type(type),_xp(0){

}

AMateria::AMateria(const AMateria &a):
_type(a._type), _xp(a._xp){
    
}

AMateria::~AMateria(){
    
}

AMateria &AMateria::operator=(const AMateria &a){
    _type = a._type;
    _xp = a._xp;
    return *this;
}

std::string const &AMateria::getType() const {
    return (_type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    _xp += 10;
}