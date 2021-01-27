/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:00:18 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 11:01:04 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(std::string const &target);
        PresidentialPardonForm(const PresidentialPardonForm &e);
        ~PresidentialPardonForm();

		std::string getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;

};
#endif