/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:56:20 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 09:11:36 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main() {

	{

		Zombie Zomb1("Erouan", "Walker");
		Zomb1.advert();

	}

	{
		ZombieEvent Zombcreat;
		Zombcreat.setZombieType("Runner");
	
		Zombcreat.randomChump();

		Zombie *Zomb2 = Zombcreat.newZombie("Youenn");
		Zomb2->advert();
		delete Zomb2;
	}
}