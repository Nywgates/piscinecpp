/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 09:16:33 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 09:58:36 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

string randomName(int length) {

  char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
  char vowels[] = {'a','e','i','o','u','y'};

  string name = "";

  int random = rand() % 2;
  int count = 0;

  for(int i = 0; i < length; i++) {

    if(random < 2 && count < 2) {
      name = name + consonents[rand() % 19];
      count++;
    }
    else {
      name = name + vowels[rand() % 5];
      count = 0;
    }

    random = rand() % 2;

  }
	return name;
}

ZombieHorde::ZombieHorde(int n)
{
	Zombs = new Zombie[n];
	v_n = n;
	for (int i = 0; i < n; i++){
		Zombs[i] = Zombie(randomName(5), "Walker");
	}
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < v_n; i++)
		Zombs[i].advert();
}

ZombieHorde::~ZombieHorde() {
	delete[] Zombs;
}