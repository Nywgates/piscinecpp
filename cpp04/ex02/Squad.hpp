/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:16:09 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:57:01 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		struct str_squad{
			ISpaceMarine *marine;

			str_squad *next;
		};

		str_squad *lst_deep_cpy(str_squad *s);
        void lst_destroy(str_squad *s);

        str_squad *lst_marine;
        int _count;

	public:
		Squad();
		Squad(const Squad &e);
        Squad &operator=(const Squad &e);
		~Squad();

		int getCount() const ;
		ISpaceMarine* getUnit(int idx) const ;
		int push(ISpaceMarine *marine);
};

#endif