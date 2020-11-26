/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:15:00 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 10:39:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


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

    NinjaTrap nt1("nt 1");
    NinjaTrap nt2("nt 2");

    nt1.meleeAttack("nt 2");
    nt2.takeDamage(30);
    nt1.rangedAttack("nt 2");
    nt2.takeDamage(20);
    nt2.beRepaired(20);
    nt2.meleeAttack("nt 1");
    nt1.takeDamage(30);
    nt2.meleeAttack("nt 1");
    nt1.takeDamage(30);
    nt2.meleeAttack("nt 1");
    nt1.takeDamage(30);
    nt2.meleeAttack("nt 1");
    nt1.takeDamage(30);

    nt2.ninjaShoebox(nt1);
    nt2.ninjaShoebox(ft1);
    nt2.ninjaShoebox(ft2);
    nt2.ninjaShoebox(st1);
    nt2.ninjaShoebox(st2);

    SuperTrap sut1("sut 1");
    SuperTrap sut2("sut 2");

    sut1.meleeAttack("sut 2");
    sut2.takeDamage(30);
    sut1.rangedAttack("sut 2");
    sut2.takeDamage(20);
    sut2.beRepaired(20);
    sut2.meleeAttack("sut 1");
    sut1.takeDamage(30);
    sut2.meleeAttack("sut 1");
    sut1.takeDamage(30);
    sut2.meleeAttack("sut 1");
    sut1.takeDamage(30);
    sut2.meleeAttack("sut 1");
    sut1.takeDamage(30);

    sut2.ninjaShoebox(ft2);
    sut2.vaulthunter_dot_exe("sut 1");
}