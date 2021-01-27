/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:52:04 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 10:58:42 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREAUESTFROM_HPP
#define ROBOTOMYREAUESTFROM_HPP

#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(std::string const &target);
        RobotomyRequestForm(const RobotomyRequestForm &e);
        ~RobotomyRequestForm();

		std::string getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;

};
#endif