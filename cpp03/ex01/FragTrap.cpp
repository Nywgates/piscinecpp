/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:02:54 by user42            #+#    #+#             */
/*   Updated: 2020/11/24 11:19:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): _name(name), _hit_points(100),
    _max_hit_points(100), _energy_points(100), _max_energy_points(100),
    _level(1), _melee_attack_damage(30), _ranged_attack_damage(20),
    _armor_damage_reduction(5)
{
    srand(time(NULL));
    std::cout << "Je suis vivant, je suis vivant. Oh mon dieu, je suis vivant." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "Je suis mort, je suis mort. Oh mon dieu, je suis mort." << std::endl;
}

void    FragTrap::rangedAttack(std::string const &target){
    std::cout << _name << " attaque à distance " << target
                << " de " << _ranged_attack_damage << std::endl;
}
void    FragTrap::meleeAttack(std::string const &target){
    std::cout << _name << " attaque en mêlée " << target
                << " de " << _melee_attack_damage << std::endl;
}
void    FragTrap::takeDamage(unsigned int amount){
    int new_hp = _hit_points - (amount - _armor_damage_reduction);
    if (new_hp > 0) {
        std::cout << _name << " : Ouch ! Ca pique : -" << _hit_points - new_hp << "hp" << std::endl;
        _hit_points = new_hp;
    }
}
void    FragTrap::beRepaired(unsigned int amount){
    int new_hp = _hit_points + amount;
    if (new_hp <= _max_hit_points) {
        std::cout << _name << " : Merci de m'avoir donné une deuxieme chance Dieu ! +" << amount << "hp" << std::endl;
        _hit_points = new_hp;
    }
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
    if (_energy_points < 25)
    {
        std::cout << "BRANCHE MOI !" << std::endl;
        return;
    }
    _energy_points -= 25;
    std::string attack = lst_attacks[std::rand() % 5];
    std::cout << _name << " : " << attack << std::endl;
}