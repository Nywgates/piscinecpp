/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 09:41:01 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 10:33:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
    public:
        NinjaTrap(std::string name);
        ~NinjaTrap();

        void    rangedAttack(std::string const &target) const;
        void    meleeAttack(std::string const &target) const;
        void    ninjaShoebox(const FragTrap &target);
        void    ninjaShoebox(const ScavTrap &target);
        void    ninjaShoebox(const NinjaTrap &target);

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
