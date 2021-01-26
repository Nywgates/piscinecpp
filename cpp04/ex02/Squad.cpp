/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:16:28 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 11:03:24 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad():lst_marine(NULL), _count(0){

}

Squad::str_squad *Squad::lst_deep_cpy(Squad::str_squad *s)
{
    if (!s)
        return NULL;
    return new Squad::str_squad((Squad::str_squad) { s->marine->clone(), lst_deep_cpy(s->next) });
}

void Squad::lst_destroy(Squad::str_squad *s)
{
    if (!s)
        return;
    delete s->marine;
    lst_destroy(s->next); 
    delete s;
}

int	Squad::getCount() const {
	return (_count);
}

ISpaceMarine *Squad::getUnit(int idx) const {
	int nb = 0;
	str_squad *tmp = lst_marine;

	if (nb < 0 || idx >= _count) {
		std::cout << "Not valid index !" << std::endl;
		return (NULL);
	}
	while (tmp) {
		if (nb == idx){
			return (tmp->marine);
		}
		nb++;
		tmp = tmp->next;
	}
	return (NULL);
}

int	Squad::push(ISpaceMarine *marine){
	str_squad **tmp = &lst_marine;

	if (marine == NULL) {
		std::cout << "This marine does not exist." << std::endl;
		return (_count);
	}
	while (*tmp) {
		if ((*tmp)->marine == marine){
			std::cout << "This marine already in the squad." << std::endl;
			return (_count);
		}
		tmp = &(*tmp)->next;
	}
	*tmp = new Squad::str_squad((Squad::str_squad) { marine, NULL});
	return (++_count);
}

Squad::~Squad(){
    lst_destroy(lst_marine);
}

Squad::Squad(const Squad &e)
:lst_marine(lst_deep_cpy(e.lst_marine)), _count(e._count){
}

Squad &Squad::operator=(const Squad &s){
    _count = s._count;
    lst_destroy(lst_marine);
    lst_marine = lst_deep_cpy(s.lst_marine);
    return *this;
}

