/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:09:12 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 13:05:26 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		std::string _type;
	public:
		Ice();
		Ice(const Ice &e);
        Ice &operator=(const Ice &e);
		~Ice();
		virtual Ice* clone() const;
		virtual void use(ICharacter &target);
};

#endif