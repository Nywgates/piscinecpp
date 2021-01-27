/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:16:27 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 10:22:07 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

	private:
		std::string _name;
		int	_grade;
	public:
		Bureaucrat(std::string const &name, int grade);
        Bureaucrat(const Bureaucrat &e);
        Bureaucrat &operator=(const Bureaucrat &e);
        ~Bureaucrat();

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

	std::string getName() const;
	int getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(int idx, std::string formName);
	void	executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);

#endif