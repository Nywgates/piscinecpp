/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:56:05 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 11:48:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();

        void    rangedAttack(std::string const &target);
        void    meleeAttack(std::string const &target);
        void    vaulthunter_dot_exe(const std::string &target);
};

#endif