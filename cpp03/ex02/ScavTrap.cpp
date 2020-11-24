/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:50:44 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 11:49:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
    ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    srand(time(NULL));
    std::cout << "Je suis pas mort, je suis pas mort. Oh mon dieu, je suis pas mort." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Je suis pas vivant, je suis pas vivant. Oh mon dieu, je suis pas vivant." << std::endl;
}

void    ScavTrap::rangedAttack(std::string const &target){
    std::cout << getName() << " attaque à distance, d'une distance considérable " << target
                << " de " << get_ranged_attack_dmg() << std::endl;
}
void    ScavTrap::meleeAttack(std::string const &target){
    std::cout << getName() << " attaque en mêlée, d'une distance peu considérable " << target
                << " de " << get_melee_attack_dmg() << std::endl;
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
    if (getEP() < 25)
    {
        std::cout << "BRANCHE MOI !" << std::endl;
        return;
    }
    setEnergyPoints(getEP() - 25);
    std::string attack = lst_attacks[std::rand() % 5];
    std::cout << getName() << " : " << attack << std::endl;
};