/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:13:21 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 10:30:14 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(){
	try {
		int a[6] = {1, 2, 3, 4, 5, 6};

		int *tmp = easyfind(a, 4);
		std::cout << tmp << std::endl;
		std::cout << *tmp << std::endl;
		std::cout << easyfind(a, 0) << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}