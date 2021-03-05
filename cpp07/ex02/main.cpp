/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:08:10 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 10:10:32 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(){
	try {
		Array<int> a(6);
		Array<int> b;

		a[5] = 4;

		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
		std::cout << "Size : " << a.size() << std::endl;

		std::cout << a[7] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Array<int> a(6);
		Array<int> b;

		b = a;
		a[5] = 4;

		std::cout << "Array A" << std::endl;
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
		std::cout << "Size : " << a.size() << std::endl;

		std::cout << "Array B" << std::endl;
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
		std::cout << "Size : " << b.size() << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Array<int> a(6);
		Array<int> b(a);

		a[5] = 4;

		std::cout << "Array A" << std::endl;
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
		std::cout << "Size : " << a.size() << std::endl;

		std::cout << "Array B" << std::endl;
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
		std::cout << "Size : " << b.size() << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
}