/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:15:00 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 11:50:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap ft1("ft 1");
    FragTrap ft2("ft 2");

    ft1.meleeAttack("ft 2");
    ft2.takeDamage(30);
    ft1.rangedAttack("ft 2");
    ft2.takeDamage(20);
    ft2.beRepaired(20);
    ft2.meleeAttack("ft 1");
    ft1.takeDamage(30);
    ft2.meleeAttack("ft 1");
    ft1.takeDamage(30);
    ft2.meleeAttack("ft 1");
    ft1.takeDamage(30);
    ft2.meleeAttack("ft 1");
    ft1.takeDamage(30);

    ft2.vaulthunter_dot_exe("ft 1");
    ft2.vaulthunter_dot_exe("ft 1");
    ft2.vaulthunter_dot_exe("ft 1");
    ft2.vaulthunter_dot_exe("ft 1");
    ft2.vaulthunter_dot_exe("ft 1");

    ScavTrap st1("st 1");
    ScavTrap st2("st 2");

    st1.meleeAttack("st 2");
    st2.takeDamage(30);
    st1.rangedAttack("st 2");
    st2.takeDamage(20);
    st2.beRepaired(20);
    st2.meleeAttack("st 1");
    st1.takeDamage(30);
    st2.meleeAttack("st 1");
    st1.takeDamage(30);
    st2.meleeAttack("st 1");
    st1.takeDamage(30);
    st2.meleeAttack("st 1");
    st1.takeDamage(30);

    st2.challengeNewcomer("st 1");
    st2.challengeNewcomer("st 1");
    st2.challengeNewcomer("st 1");
    st2.challengeNewcomer("st 1");
    st2.challengeNewcomer("st 1");
}