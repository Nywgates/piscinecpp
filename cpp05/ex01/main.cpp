/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:16:25 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 09:58:03 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(){
	try
	{
		Bureaucrat JeanMi("Jean Michel", 50);
		Form	fr("FORMUlAIRE", 50, 50);

		JeanMi.incrementGrade();
		std::cout << JeanMi << std::endl;
		std::cout << fr << std::endl;
		fr.beSigned(&JeanMi);

		JeanMi.decrementGrade();
		JeanMi.decrementGrade();
		std::cout << JeanMi << std::endl;
		std::cout << fr << std::endl;
		fr.beSigned(&JeanMi);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat JeanMi("Jean Michel", 50);
		Form	fr("FORMULAIRE", 50, 50);

		JeanMi.decrementGrade();
		JeanMi.decrementGrade();
		std::cout << JeanMi << std::endl;
		std::cout << fr << std::endl;
		fr.beSigned(&JeanMi);
		std::cout << fr << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form	fr("FORMULAIRE", 151, 50);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Form	fr("FORMULAIRE", 0, 50);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}