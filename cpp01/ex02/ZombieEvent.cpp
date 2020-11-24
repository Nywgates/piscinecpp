/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:50:08 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 09:11:00 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void	ZombieEvent::setZombieType(string type){
	v_type = type;
}

Zombie *ZombieEvent::newZombie(string name){
	Zombie *zomb= new Zombie(name, v_type);
	return (zomb);
}

void ZombieEvent::randomChump(){
	string name[] = {"alors", "un", "choix", "aléatoire", "parmi", "groupe", "de", "noms"};
	srand(time(NULL));
	Zombie zomb(name[std::rand() % 8], v_type);
	zomb.advert();
}