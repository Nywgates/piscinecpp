/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:31:44 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 09:54:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
_name(name), _apcost(apcost), _damage(damage) {
    
}

AWeapon::~AWeapon(){
    
}

AWeapon::AWeapon(const AWeapon &a):
_name(a._name), _apcost(a._apcost), _damage(a._damage)
{}

AWeapon &AWeapon::operator=(const AWeapon &c)
{
    _name = c._name;
    _apcost = c._apcost;
    _damage = c._damage;
    return *this;
}

std::string AWeapon::getName() const {
    return (_name);
}

int AWeapon::getAPCost() const {
    return (_apcost);
}

int AWeapon::getDamage() const {
    return (_damage);
}

void AWeapon::setName(std::string Name) {
    _name = Name;
}

void AWeapon::setDamage(int Damage){
    _damage = Damage;
}

void AWeapon::setAPcost(int apcost){
    _apcost = apcost;
}