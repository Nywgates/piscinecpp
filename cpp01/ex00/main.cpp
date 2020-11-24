/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 07:53:34 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 08:23:29 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
	Pony Stack = ponyOnTheStack();
	Pony *Heap = ponyOnTheHeap();
	Stack.jump();
	Heap->jump();
	
	delete Heap;
}