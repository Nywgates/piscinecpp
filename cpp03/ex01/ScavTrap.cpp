/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:50:44 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 11:14:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _name(name), _hit_points(100),
    _max_hit_points(100), _energy_points(100), _max_energy_points(100),
    _level(1), _melee_attack_damage(30), _ranged_attack_damage(20),
    _armor_damage_reduction(5)
{
    srand(time(NULL));
    std::cout << "Je suis pas mort, je suis pas mort. Oh mon dieu, je suis pas mort." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Je suis pas vivant, je suis pas vivant. Oh mon dieu, je suis pas vivant." << std::endl;
}

void    ScavTrap::rangedAttack(std::string const &target){
    std::cout << _name << " attaque à distance, d'une distance considérable " << target
                << " de " << _ranged_attack_damage << std::endl;
}
void    ScavTrap::meleeAttack(std::string const &target){
    std::cout << _name << " attaque en mêlée, d'une distance peu considérable " << target
                << " de " << _melee_attack_damage << std::endl;
}
void    ScavTrap::takeDamage(unsigned int amount){
    int new_hp = _hit_points - (amount - _armor_damage_reduction);
    if (new_hp > 0) {
        std::cout << _name << " : Ouch ! Ca pique de facon discontinue: -" << _hit_points - new_hp << "hp" << std::endl;
        _hit_points = new_hp;
    }
}
void    ScavTrap::beRepaired(unsigned int amount){
    int new_hp = _hit_points + amount;
    if (new_hp <= _max_hit_points) {
        std::cout << _name << " : Je me remercie de me reparer +" << amount << "hp" << std::endl;
        _hit_points = new_hp;
    }
}

static const std::string lst_attacks[] = {
    "Jonlgez avec mes boulons.",
    "Faites du vélo.",
    "Pas d'idée #1",
    "360 ?",
    "Pas d'idée #2",
};

void ScavTrap::challengeNewcomer(const std::string &target)
{
    if (_energy_points < 25)
    {
        std::cout << "BRANCHE MOI !" << std::endl;
        return;
    }
    _energy_points -= 25;
    std::string attack = lst_attacks[std::rand() % 5];
    std::cout << _name << " : " << attack << std::endl;
}