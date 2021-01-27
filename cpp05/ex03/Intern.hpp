/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:10:37 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 11:30:14 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private:
			struct	fct_ptr {
				std::string _command;
				Form	*(Intern::*fn)(std::string const target);
			};

			static const fct_ptr	fct_tab[3];
	public:
		Intern();
        ~Intern();

		class NotValidName : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		
		Form	*makeForm(std::string formType, std::string formTarget);

		Form	*makePresidential(std::string const target);
		Form	*makeRobot(std::string const target);
		Form	*makeShrubbery(std::string const target);
};

#endif