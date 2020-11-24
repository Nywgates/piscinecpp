/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:50:51 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 11:11:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
    private:
        std::string _name;
        int _hit_points,_max_hit_points, _energy_points, _max_energy_points,
            _level, _melee_attack_damage, _ranged_attack_damage,_armor_damage_reduction;
    public:
        ScavTrap(std::string name);
        ~ScavTrap();

        void    rangedAttack(std::string const &target);
        void    meleeAttack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    challengeNewcomer(const std::string &target);
};

#endif