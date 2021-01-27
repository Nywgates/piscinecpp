/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:16:25 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 11:34:52 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "a");
		rrf = someRandomIntern.makeForm("presidential pardon", "b");
		rrf = someRandomIntern.makeForm("shrubbery creation", "c");
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("not valid", "a");
		rrf = someRandomIntern.makeForm("presidential pardon", "b");
		rrf = someRandomIntern.makeForm("shrubbery creation", "c");
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
