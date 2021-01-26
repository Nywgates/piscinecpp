/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:00:25 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 10:13:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(std::string type, int HP):
_type(type), _HP(HP) {
}

Enemy::~Enemy(){
    
}

Enemy::Enemy(const Enemy &e)
:_type(e._type), _HP(e._HP){
    
}

Enemy &Enemy::operator=(const Enemy &e){
    setHP(e._HP);
    setType(e._type);
    return *this;
}

void Enemy::takeDamage(int dmg){
    setHP(_HP - dmg < 0 ? 0 : _HP - dmg);
}

std::string Enemy::getType() const {
    return (_type);
}

int Enemy::getHP() const {
    return (_HP);
}

void Enemy::setHP(int HP){
    _HP = HP;
}

void Enemy::setType(std::string type){
    _type = type;
}