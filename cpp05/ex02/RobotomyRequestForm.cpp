/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:52:13 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 10:59:34 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &e)
:Form("RobotomyRequestForm", 72, 45), _target(e.getTarget())
{
	srand(time(NULL));
}


RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
:Form("RobotomyRequestForm", 72, 45), _target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void		RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	execCheck(executor);
	std::cout << "Brrrrrrrr... Bzzzzzzzz.... Biiiiiiip..." << std::endl;
	std::cout << rand();
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Failure! " << getTarget() << " could not been robotomized!" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
	return (_target);
}