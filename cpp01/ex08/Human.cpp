/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:42:00 by laballea          #+#    #+#             */
/*   Updated: 2020/10/09 14:04:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	f_map["melee"] = &Human::meleeAttack;
	f_map["ranged"] = &Human::rangedAttack;
	f_map["intimidate"] = &Human::intimidatingShout;
}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Gitoufline attaque gitoucac sur " << target << std::endl;
}
void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Gitoufline lance un caillou sur " << target << std::endl;
}
void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Gitoufline cri : \"WOUAH\" sur " << target << std::endl;
}
void	Human::action(std::string const & action_name, std::string const & target)
{
	t_map::iterator it = f_map.find(action_name);
	(this->*it->second)(target);
}
