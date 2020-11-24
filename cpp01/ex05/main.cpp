/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:09:17 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 10:23:50 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(){
	Human bob;
	
	std::cout << bob.identifier() << std::endl;
	std::cout << bob.getBrain().identifier() << std::endl;
}