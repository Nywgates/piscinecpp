/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:12:57 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 11:32:57 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const	Intern::fct_ptr Intern::fct_tab[3] = {
	{"presidential pardon", &Intern::makePresidential},
	{"robotomy request", &Intern::makeRobot},
	{"shrubbery creation", &Intern::makeShrubbery}
};

Intern::Intern()
{
}

Intern::~Intern(){
}

Form	*Intern::makeForm(std::string formType, std::string formTarget){
	for (int i = 0; i < 3; i++) {
		if (fct_tab[i]._command == formType)
			return (this->*fct_tab[i].fn)(formTarget);
	}
	throw Intern::NotValidName();
	return (NULL);
}

const char	*Intern::NotValidName::what() const throw() {
	return "Formular's name is not valid !";
}

Form	*Intern::makePresidential(std::string const target){
	std::cout << "Intern creates Presidential Pardon Form." << std::endl;
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeRobot(std::string const target){
	std::cout << "Intern creates Robotomy Request Form." << std::endl;
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makeShrubbery(std::string const target){
	std::cout << "Intern creates Shrubbery Creation Form." << std::endl;
	return (new ShrubberyCreationForm(target));
}