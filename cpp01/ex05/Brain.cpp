/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:07:43 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 10:28:32 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identifier() const{
	std::stringstream ss;

	ss << "0x" << std::hex << (unsigned long)this; 
	return ss.str();
}