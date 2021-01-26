/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:37 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 09:50:02 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
	private:
		int	_AP;
		std::string _name;
		AWeapon *_weapon;
	 protected:
        void setAP(int AP);
		void setName(std::string Name);
	public:
		Character(std::string const & name);
		Character(const Character &e);
        Character &operator=(const Character &e);
		~Character();
		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);

		AWeapon *getWeapon() const;
		int		getAP() const;
		std::string getName() const;
};

std::ostream &operator<<(std::ostream &out, const Character &Character);

#endif