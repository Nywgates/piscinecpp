/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 09:08:25 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 09:47:55 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Form
{

	private:
		bool _signed;
		std::string _name;
		int	_signGrade;
		int	_execGrade;
	public:
		Form(std::string const &name, int signGrade, int execGrade);
        Form(const Form &e);
        Form &operator=(const Form &e);
        ~Form();

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

	std::string getName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	int getSigned() const;
	void	beSigned(Bureaucrat *b);
	void	signForm(Bureaucrat *b);
};

std::ostream &operator<<(std::ostream &out, const Form &Form);

#endif