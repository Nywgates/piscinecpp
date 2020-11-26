/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:16:03 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 09:58:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string _name;
        int _hit_points,_max_hit_points, _energy_points, _max_energy_points,
            _level, _melee_attack_damage, _ranged_attack_damage,_armor_damage_reduction;
    
    protected:
        void setEnergyPoints(const int &energyPoints);
        void setHitPoints(const int &hitPoints);
    
    public:
        ClapTrap(std::string name, int hit_points, int max_hit_points,
                int energy_points, int max_energy_points, int level,
                int melee_attack_damage, int ranged_attack_damage,
                int armor_damage_reduction);
        ~ClapTrap();

        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        const std::string &getName() const;
        const int &getHP() const;
        const int &getMHP() const;
        const int &getEP() const;
        const int &getMEP() const;
        const int &getlvl() const;
        const int &get_melee_attack_dmg() const;
        const int &get_ranged_attack_dmg() const;
        const int &get_armor_dmg_reduc() const;
};

#endif