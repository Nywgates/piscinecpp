/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 08:27:26 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 09:51:52 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <list>

using namespace std;

class Zombie{

	public:
		Zombie(string name, string type);
		Zombie();
		void advert();
	private:
		string v_name;
		string v_type;
};

#endif
