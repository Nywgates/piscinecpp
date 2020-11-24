/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:15:00 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 10:46:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap robot1("Robot 1");
    FragTrap robot2("Robot 2");

    robot1.meleeAttack("Robot 2");
    robot2.takeDamage(30);
    robot1.rangedAttack("Robot 2");
    robot2.takeDamage(20);
    robot2.beRepaired(20);
    robot2.meleeAttack("Robot 1");
    robot1.takeDamage(30);
    robot2.meleeAttack("Robot 1");
    robot1.takeDamage(30);
    robot2.meleeAttack("Robot 1");
    robot1.takeDamage(30);
    robot2.meleeAttack("Robot 1");
    robot1.takeDamage(30);

    robot2.vaulthunter_dot_exe("Robot 1");
    robot2.vaulthunter_dot_exe("Robot 1");
    robot2.vaulthunter_dot_exe("Robot 1");
    robot2.vaulthunter_dot_exe("Robot 1");
    robot2.vaulthunter_dot_exe("Robot 1");
}