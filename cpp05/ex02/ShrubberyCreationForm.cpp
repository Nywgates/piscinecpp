/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:02:56 by laballea          #+#    #+#             */
/*   Updated: 2021/01/27 10:39:50 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &e)
:Form("ShrubberyCreationForm", 145, 137), _target(e.getTarget()){
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
:Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	execCheck(executor);
	std::ofstream	file_stream(_target);
	file_stream << "	            ,@@@@@@@,                " << std::endl;
	file_stream << "       ,,,.   ,@@@@@@/@@,  .oo8888o.    " << std::endl;
	file_stream << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o   " << std::endl;
	file_stream << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'  " << std::endl;
	file_stream << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'  " << std::endl;
	file_stream << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'   " << std::endl;
	file_stream << "   `&%\\ ` /%&'    |.|        \\ '|8'     " << std::endl;
	file_stream << "       |o|        | |         | |       " << std::endl;
	file_stream << "       |.|        | |         | |       " << std::endl;
	file_stream << "    __/   \\______/   \\_______/   \\______" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
	return (_target);
}