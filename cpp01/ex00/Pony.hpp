/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 07:51:24 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 08:16:13 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

class Pony
{
	public:
		string name;
	    Pony(string v_name) {
     		name = v_name;
    	}
		void jump();
};

Pony ponyOnTheStack();
Pony *ponyOnTheHeap();