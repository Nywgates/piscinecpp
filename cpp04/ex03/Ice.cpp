/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:11:51 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 13:04:28 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){

}

Ice::~Ice(){
}

Ice::Ice(const Ice &i)
:AMateria("ice"){
	(void)i;
}

Ice &Ice::operator=(const Ice &i){
	(void)i;
    return *this;
}

Ice* Ice::clone() const{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target){
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}