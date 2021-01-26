/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:38:47 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 09:53:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
    public:
        PowerFist();
        virtual ~PowerFist();
        PowerFist(const PowerFist &a);
        PowerFist &operator=(const PowerFist &a);

        virtual void attack() const;
};

#endif