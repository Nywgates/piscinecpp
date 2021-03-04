/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:46:19 by laballea          #+#    #+#             */
/*   Updated: 2021/03/04 10:57:48 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base{
	public:
		virtual ~Base();
};

class A : public Base{
	public:
		A();
		~A();
};

class B : public Base{
	public:
		B();
		~B();
};

class C : public Base{
	public:
		C();
		~C();
};

#endif