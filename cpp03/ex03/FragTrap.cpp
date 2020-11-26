/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:02:54 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 11:44:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
    ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    srand(time(NULL));
    std::cout << "Je suis vivant, je suis vivant. Oh mon dieu, je suis vivant." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Je suis mort, je suis mort. Oh mon dieu, je suis mort." << std::endl;
}

void    FragTrap::rangedAttack(std::string const &target){
    std::cout << getName() << " attaque à distance " << target
                << " de " << get_ranged_attack_dmg() << std::endl;
}
void    FragTrap::meleeAttack(std::string const &target){
    std::cout << getName() << " attaque en mêlée " << target
                << " de " << get_melee_attack_dmg() << std::endl;
}

static const std::string lst_attacks[] = {
    "Attention ! Lancez de boulon !",
    "Pas d'idée #1",
    "J\'ai organisé une révolution une fois, avec beaucoup d'armes à feu et beaucoup de morts. \
On pourrait croire que ça m\'aurait apporté une sorte de reconnaissance, mais non. On m\'a rétrogradé au statut d\'esclave ouvre-portes. ",
    "Je pratique intensement le monowheel.",
    "Pas d'idée #2",
};

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
    if (getEP() < 25)
    {
        std::cout << "BRANCHE MOI !" << std::endl;
        return;
    }
    setEnergyPoints(getEP() - 25);
    std::string attack = lst_attacks[std::rand() % 5];
    std::cout << getName() << " : " << attack << std::endl;
}