/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:12:21 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 10:29:33 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <iostream>

class	NotFoundException: public std::exception {
    public:
        virtual const char* what() const throw();
};

template<typename T>
int		*easyfind(T &t, int n){
	for (int i = 0; t[i]; i++){
		if (t[i] == n)
			return (&t[i]);
	}
	throw NotFoundException();
}

const char	*NotFoundException::what() const throw() {
	return "Occurence not found.";
}
#endif