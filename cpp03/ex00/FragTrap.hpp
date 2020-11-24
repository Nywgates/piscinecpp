/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:56:05 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 10:56:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
    private:
        std::string _name;
        int _hit_points,_max_hit_points, _energy_points, _max_energy_points,
            _level, _melee_attack_damage, _ranged_attack_damage,_armor_damage_reduction;
    public:
        FragTrap(std::string name);
        ~FragTrap();

        void    rangedAttack(std::string const &target);
        void    meleeAttack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    vaulthunter_dot_exe(const std::string &target);
};

#endif