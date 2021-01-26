/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:22:24 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 09:55:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon{
    private:
        std::string _name;
        int _apcost, _damage;

    protected:
        void setName(std::string Name);
        void setDamage(int Damage);
        void setAPcost(int apcost);
    
    public:
        AWeapon(std::string const &name, int apcost, int damage);
        virtual ~AWeapon();
        AWeapon(const AWeapon &a);
        AWeapon &operator=(const AWeapon &a);

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        
        virtual void attack() const = 0;

};

#endif