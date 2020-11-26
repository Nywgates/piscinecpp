/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:04:43 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 10:36:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name):
    ClapTrap(name, baseHitPoints(), maxHitPoints(), baseEnergyPoints(), maxEnergyPoints(), level(), meleeAttackDamage(), rangedAttackDamage(), armorAttackReduction()), FragTrap(name), NinjaTrap(name)
{
    srand(time(NULL));
}

SuperTrap::~SuperTrap() {
    std::cout << "Je suis pas vivant, je suis pas vivant. Oh mon dieu, je suis pas vivant." << std::endl;
}

void SuperTrap::rangedAttack(const std::string &target) const
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) const
{
    NinjaTrap::meleeAttack(target);
}

// base attributes

int SuperTrap::baseHitPoints() const
{
    return FragTrap::baseHitPoints();
}

int SuperTrap::maxHitPoints() const
{
    return FragTrap::maxHitPoints();
}

int SuperTrap::baseEnergyPoints() const
{
    return NinjaTrap::baseEnergyPoints();
}

int SuperTrap::maxEnergyPoints() const
{
    return NinjaTrap::maxEnergyPoints();
}

int SuperTrap::level() const
{
    return 1;
}

int SuperTrap::meleeAttackDamage() const
{
    return NinjaTrap::meleeAttackDamage();
}

int SuperTrap::rangedAttackDamage() const
{
    return FragTrap::rangedAttackDamage();
}

int SuperTrap::armorAttackReduction() const
{
    return FragTrap::armorAttackReduction();
}