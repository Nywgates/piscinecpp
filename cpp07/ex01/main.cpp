/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:42:22 by laballea          #+#    #+#             */
/*   Updated: 2021/03/04 11:56:57 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	incrementInt(int &a)
{
	a += 1;
}

void	incrementChar(char &a)
{
	a += 1;
}

int		main(){
	int a[5] = {1, 2, 3, 4, 5};
	char b[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(a, 5, incrementInt);
	iter(b, 5, incrementChar);
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << std::endl;
}
