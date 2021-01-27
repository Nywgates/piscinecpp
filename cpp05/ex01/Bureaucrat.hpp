/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:16:27 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 09:33:13 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);

#endif