/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 07:54:14 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 08:20:29 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::jump()
{
	cout << "Huhuhu *jump* " << this->name << endl;
}

Pony ponyOnTheStack()
{
	Pony Qwerty("GitoufStack");
	return (Qwerty);
}

Pony *ponyOnTheHeap()
{
	return (new Pony("GitoufHeap"));
}