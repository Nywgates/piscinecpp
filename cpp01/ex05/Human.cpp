/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:19:39 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 10:29:50 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string Human::identifier() const{
	return my_brain.identifier();
}

Brain &Human::getBrain(){
	return (my_brain);
}