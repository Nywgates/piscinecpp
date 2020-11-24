/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:35:49 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 13:34:31 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
	public:
		HumanA(std::string v_name, Weapon &v_weapon);
		void setWeapon(Weapon &v_weapon);
		void attack();
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif