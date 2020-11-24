/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:41:58 by laballea          #+#    #+#             */
/*   Updated: 2020/10/09 13:59:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>

class Human
{
	private:
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);
		
	public:
		typedef void (Human::*pfunc)(std::string const &);
		typedef std::map<std::string, pfunc> t_map;
		t_map f_map;
		Human();
		void action(std::string const & action_name, std::string const & target);
};