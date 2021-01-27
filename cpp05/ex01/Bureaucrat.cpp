/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:16:50 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 09:51:27 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const Bureaucrat &e)
:_name(e._name), _grade(e._grade){
    
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &e){
    _grade = e._grade;
    _name = e._name;
    return *this;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade):
_name(name), _grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){
    
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
	return out << Bureaucrat.getName() << ", bureaucrat grade "
	<< Bureaucrat.getGrade() << std::endl;
}

void	Bureaucrat::incrementGrade(){
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1; 
}

void	Bureaucrat::decrementGrade(){
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::signForm(int idx, std::string formName){
	if (idx == 1)
		std::cout << _name << " cannot sign " << formName << " because his grade is too low." << std::endl;
	else if (idx == 2)
		std::cout << _name << " cannot sign " << formName << " because it's already signed." << std::endl;
	else if (idx == 3)
		std::cout << _name << " signs " << formName << "." << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return "The Bureaucrat's grade is too High!";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return "The Bureaucrat's grade is too Low!";
}

std::string Bureaucrat::getName() const{
	return (_name);
}

int Bureaucrat::getGrade() const{
	return (_grade);
}
