/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:18:38 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 13:04:34 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure():AMateria("cure"){

}

Cure::~Cure(){
}

Cure::Cure(const Cure &c)
:AMateria("cure"){
	(void)c;
}

Cure &Cure::operator=(const Cure &c){
	(void)c;
    return *this;
}

Cure* Cure::clone() const{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target){
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}