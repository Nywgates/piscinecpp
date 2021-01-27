/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:16:25 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 11:08:00 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	try
	{
		Bureaucrat JeanMi("Jean Michel", 150);
		ShrubberyCreationForm	tree("Tree");
		RobotomyRequestForm	Robot("Robot");
		PresidentialPardonForm Pres("Pres");
	
		std::cout << JeanMi << std::endl;

		std::cout << tree << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Pres << std::endl;

		tree.beSigned(&JeanMi);
		Robot.beSigned(&JeanMi);
		Pres.beSigned(&JeanMi);

		JeanMi.executeForm(tree);
		JeanMi.executeForm(Robot);
		JeanMi.executeForm(Pres);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat JeanMi("Jean Michel", 125);
		ShrubberyCreationForm	tree("Tree");
		RobotomyRequestForm	Robot("Robot");
		PresidentialPardonForm Pres("Pres");
	
		std::cout << JeanMi << std::endl;

		std::cout << tree << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Pres << std::endl;

		tree.beSigned(&JeanMi);
		Robot.beSigned(&JeanMi);
		Pres.beSigned(&JeanMi);

		JeanMi.executeForm(tree);
		JeanMi.executeForm(Robot);
		JeanMi.executeForm(Pres);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat JeanMi("Jean Michel", 72);
		ShrubberyCreationForm	tree("Tree");
		RobotomyRequestForm	Robot("Robot");
		PresidentialPardonForm Pres("Pres");
	
		std::cout << JeanMi << std::endl;

		std::cout << tree << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Pres << std::endl;

		tree.beSigned(&JeanMi);
		Robot.beSigned(&JeanMi);
		Pres.beSigned(&JeanMi);

		JeanMi.executeForm(tree);
		JeanMi.executeForm(Robot);
		JeanMi.executeForm(Pres);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat JeanMi("Jean Michel", 25);
		ShrubberyCreationForm	tree("Tree");
		RobotomyRequestForm	Robot("Robot");
		PresidentialPardonForm Pres("Pres");
	
		std::cout << JeanMi << std::endl;

		std::cout << tree << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Pres << std::endl;

		tree.beSigned(&JeanMi);
		Robot.beSigned(&JeanMi);
		Pres.beSigned(&JeanMi);

		JeanMi.executeForm(tree);
		JeanMi.executeForm(Robot);
		JeanMi.executeForm(Pres);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat JeanMi("Jean Michel", 5);
		ShrubberyCreationForm	tree("Tree");
		RobotomyRequestForm	Robot("Robot");
		PresidentialPardonForm Pres("Pres");
	
		std::cout << JeanMi << std::endl;

		std::cout << tree << std::endl;
		std::cout << Robot << std::endl;
		std::cout << Pres << std::endl;

		tree.beSigned(&JeanMi);
		Robot.beSigned(&JeanMi);
		Pres.beSigned(&JeanMi);

		JeanMi.executeForm(tree);
		JeanMi.executeForm(Robot);
		JeanMi.executeForm(Pres);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}