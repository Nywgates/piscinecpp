/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:31:45 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 11:17:11 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <cmath>

class Span{
	private:
		unsigned int _limit;
		unsigned int _iterence;
		std::vector<int> _store;
	public:
		Span(unsigned int n);
		~Span();
		void addNumber(int n);
		int	shortestSpan();
		int	longestSpan();
		
		class	FullException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class	CantSpanException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

};

#endif