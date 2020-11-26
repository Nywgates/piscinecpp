/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 09:43:18 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 10:40:37 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name):
    ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    srand(time(NULL));
    std::cout << "Je suis vivant, je suis vivant. Oh mon dieu, je suis vivant." << std::endl;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "Je suis mort, je suis mort. Oh mon dieu, je suis mort." << std::endl;
}

void    NinjaTrap::rangedAttack(std::string const &target) const{
    std::cout << getName() << " attaque à distance " << target
                << " de " << get_ranged_attack_dmg() << std::endl;
}
void    NinjaTrap::meleeAttack(std::string const &target) const{
    std::cout << getName() << " attaque en mêlée " << target
                << " de " << get_melee_attack_dmg() << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
    if (getEP() < 25)
    {
        std::cout << "BRANCHE MOI !" << std::endl;
        return;
    }
    setEnergyPoints(getEP() - 25);
    std::cout << getName() << " : zut ! on est dans le même camp !" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &target)
{
    if (getEP() < 25)
    {
        std::cout << "BRANCHE MOI !" << std::endl;
        return;
    }
    setEnergyPoints(getEP() - 25);
    std::cout << getName() << " : Alors on sait pas faire de vélo !" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
    if (getEP() < 25)
    {
        std::cout << "BRANCHE MOI !" << std::endl;
        return;
    }
    setEnergyPoints(getEP() - 25);
    std::cout << getName() << " : ScavTrap arrête de chiper !" << std::endl;
}


int NinjaTrap::baseHitPoints() const
{
    return 60;
}

int NinjaTrap::maxHitPoints() const
{
    return 60;
}

int NinjaTrap::baseEnergyPoints() const
{
    return 120;
}

int NinjaTrap::maxEnergyPoints() const
{
    return 120;
}

int NinjaTrap::level() const
{
    return 1;
}

int NinjaTrap::meleeAttackDamage() const
{
    return 60;
}

int NinjaTrap::rangedAttackDamage() const
{
    return 5;
}

int NinjaTrap::armorAttackReduction() const
{
    return 0;
}
