/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:56:05 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 10:32:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();

        void    rangedAttack(std::string const &target) const;
        void    meleeAttack(std::string const &target) const;
        void    vaulthunter_dot_exe(const std::string &target);

        int baseHitPoints() const;
        int maxHitPoints() const;
        int baseEnergyPoints() const;
        int maxEnergyPoints() const;
        int level() const;
        int meleeAttackDamage() const;
        int rangedAttackDamage() const;
        int armorAttackReduction() const;
};

#endif