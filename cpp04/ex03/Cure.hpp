/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 11:20:01 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 13:05:22 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		std::string _type;
	public:
		Cure();
		Cure(const Cure &c);
        Cure &operator=(const Cure &c);
		~Cure();
		virtual Cure* clone() const;
		virtual void use(ICharacter &target);
};

#endif