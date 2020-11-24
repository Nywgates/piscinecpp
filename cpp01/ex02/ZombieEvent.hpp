/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:31:15 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 09:03:30 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "Zombie.hpp"
using namespace std;

class ZombieEvent{
	public:
		void setZombieType(string type);
		void randomChump();
		Zombie * newZombie(string name);
	private:
		string v_type;

};
