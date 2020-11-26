/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:16:33 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 11:49:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
ClapTrap::ClapTrap(std::string name, int hit_points, int max_hit_points,
                int energy_points, int max_energy_points, int level,
                int melee_attack_damage, int ranged_attack_damage,
                int armor_damage_reduction):
    _name(name), _hit_points(hit_points), _max_hit_points(max_hit_points),
    _energy_points(energy_points), _max_energy_points(max_energy_points),
    _level(level), _melee_attack_damage(melee_attack_damage),
    _ranged_attack_damage(ranged_attack_damage), _armor_damage_reduction(armor_damage_reduction)
{
}

ClapTrap::~ClapTrap(){
    
}

void ClapTrap::setEnergyPoints(const int &energyPoints)
{
    _energy_points = energyPoints;
}

void ClapTrap::setHitPoints(const int &hitPoints)
{
    _hit_points = hitPoints;
}

const std::string &ClapTrap::getName() const{
    return _name;
}
const int &ClapTrap::getHP() const{
    return _hit_points;
}
const int &ClapTrap::getMHP() const{
    return _max_hit_points;
}
const int &ClapTrap::getEP() const{
    return _energy_points;
}
const int &ClapTrap::getMEP() const{
    return _max_energy_points;
}
const int &ClapTrap::getlvl() const{
    return _level;
}
const int &ClapTrap::get_melee_attack_dmg() const{
    return _melee_attack_damage;
}
const int &ClapTrap::get_ranged_attack_dmg() const{
    return _ranged_attack_damage;
}
const int &ClapTrap::get_armor_dmg_reduc() const{
    return _armor_damage_reduction;
}

void    ClapTrap::takeDamage(unsigned int amount){
    int new_hp = _hit_points - (amount - _armor_damage_reduction);
    if (new_hp > 0) {
        std::cout << _name << " : Ouch ! Ca pique : -" << _hit_points - new_hp << "hp" << std::endl;
        _hit_points = new_hp;
    }
}
void    ClapTrap::beRepaired(unsigned int amount){
    int new_hp = _hit_points + amount;
    if (new_hp <= _max_hit_points) {
        std::cout << _name << " : Merci de m'avoir donné une deuxieme chance Dieu ! +" << amount << "hp" << std::endl;
        _hit_points = new_hp;
    }
}