/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:47:32 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 09:31:55 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name, string type){
	v_name = name;
	v_type = type;
}

void	Zombie::advert(){
	cout << "<" + v_name + " (" + v_type + ")> " + "Walk." << endl;
}