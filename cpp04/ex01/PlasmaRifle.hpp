/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:38:47 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 09:55:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle();
        virtual ~PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &a);
        PlasmaRifle &operator=(const PlasmaRifle &a);

        virtual void attack() const;
};

#endif