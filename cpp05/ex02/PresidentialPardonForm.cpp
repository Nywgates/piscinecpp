/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:00:31 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 11:05:23 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &e)
:Form("PresidentialPardonForm", 25, 5), _target(e.getTarget())
{
}


PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
:Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void		PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	execCheck(executor);
	std::cout << _target << " has been pardonned by Zafod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
	return (_target);
}