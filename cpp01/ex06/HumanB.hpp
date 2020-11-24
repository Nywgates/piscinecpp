/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:35:49 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 10:55:13 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &v_weapon);
		void attack();
	private:
		Weapon *_weapon;
		std::string _name;
};

#endif