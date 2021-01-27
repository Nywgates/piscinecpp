/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 09:08:25 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 10:44:05 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

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

		class NotSigned : public std::exception{
			public:
				virtual const char* what() const throw();
		};

	std::string getName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	int getSigned() const;
	void	beSigned(Bureaucrat *b);
	void	execCheck(const Bureaucrat &executor) const;
	virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &Form);

#endif