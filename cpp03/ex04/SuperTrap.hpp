/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:04:53 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 10:28:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap
{
    protected:
        SuperTrap(std::string name, int hitPoints, int energyPoints);

    public:
        SuperTrap(std::string name);
        ~SuperTrap();

        int baseHitPoints() const;
        int maxHitPoints() const;
        int baseEnergyPoints() const;
        int maxEnergyPoints() const;
        int level() const;
        int meleeAttackDamage() const;
        int rangedAttackDamage() const;
        int armorAttackReduction() const;

        void rangedAttack(const std::string &target) const;
        void meleeAttack(const std::string &target) const;
};

#endif