/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 09:12:55 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 09:41:21 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		
		void	announce();
	private:
		int v_n;
		Zombie *Zombs;
};

#endif
