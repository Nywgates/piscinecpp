/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 09:08:44 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 10:56:44 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const Form &e)
:_signed(false), _name(e._name), _signGrade(e._signGrade), _execGrade(e._execGrade){
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(const Form &e){
    _signGrade = e._signGrade;
    _execGrade = e._execGrade;
    _name = e._name;
	_signed = e._signed;
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
    return *this;
}

Form::Form(std::string const &name, int signGrade, int execGrade)
:_signed(false), _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(){
}

void	Form::execCheck(const Bureaucrat &executor) const {
	if (executor.getGrade() > _execGrade)
		throw Bureaucrat::GradeTooLowException();
	else if (!_signed)
		throw Form::NotSigned();
}

const char	*Form::GradeTooHighException::what() const throw() {
	return "Form's grade is too High !";
}

const char	*Form::GradeTooLowException::what() const throw() {
	return "Form's grade is too Low !";
}

const char	*Form::NotSigned::what() const throw() {
	return "Form's is not signed !";
}

void	Form::beSigned(Bureaucrat *b){
	if (b->getGrade() > _signGrade){
		b->signForm(1, _name);
		throw Bureaucrat::GradeTooLowException();
	}
	else if (_signed){
		b->signForm(2, _name);
	}
	else {
		b->signForm(3, _name);
		_signed = true;
	}
}

std::string Form::getName() const{
	return (_name);
}

int Form::getExecGrade() const{
	return (_execGrade);
}

int Form::getSignGrade() const{
	return (_signGrade);
}

int Form::getSigned() const{
	return (_signed);
}

std::ostream &operator<<(std::ostream &out, const Form &Form)
{
	return out << Form.getName() << " of sign's grade : " << Form.getSignGrade()
		<< ", and execution grade : " << Form.getExecGrade()
		<< ", was signed : " << Form.getSigned()
		<< std::endl;
}
