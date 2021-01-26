/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:16:25 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 13:47:23 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	try
	{
		Bureaucrat JeanMi("Jean Michel", 50);
		JeanMi.incrementGrade();
		std::cout << JeanMi << std::endl;

		Bureaucrat JeanMiDeux("Jean Michel", 150);
		JeanMiDeux.incrementGrade();
		std::cout << JeanMiDeux << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}