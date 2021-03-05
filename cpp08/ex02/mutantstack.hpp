/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:27:18 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 11:38:06 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


template<typename T>
class MutantStack{
	public:
		MutantStack();
		~MutantStack();
		MutantStack<T> &operator=(const MutantStack &m);

		T &top();
		bool empty() const;
		unsigned int size() const;
		void push(const T &value);	
};

#endif