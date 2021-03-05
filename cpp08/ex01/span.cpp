/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:31:36 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 11:23:04 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n){
	_limit = n;
	_iterence = 0;
}

Span::~Span(){
}

void	Span::addNumber(int n){
	if (_iterence >= _limit)
		throw Span::FullException();
	_store.push_back(n);
	_iterence++;
}

int	Span::shortestSpan(){
	if (_iterence <= 1)
		throw Span::CantSpanException();
	int tmp = abs(_store[1] - _store[0]);
	for (int i = 1; i < _store.size(); i++){
		if (_store[i + 1] && abs(_store[i + 1] - _store[i]) < tmp)
			tmp = abs(_store[i + 1] - _store[i]);
	}
	return (tmp);
}

int	Span::longestSpan(){
	if (_iterence <= 1)
		throw Span::CantSpanException();
	std::sort(_store.begin(), _store.end());
	return (_store.back() - _store.front());
}

const char	*Span::FullException::what() const throw() {
	return "Array is full.";
}

const char	*Span::CantSpanException::what() const throw() {
	return "Not enought number to find span.";
}