/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:57:12 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:06:25 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperMutant_HPP
# define SuperMutant_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
	
    public:
        SuperMutant();
        virtual ~SuperMutant();
        SuperMutant(const SuperMutant &a);
        SuperMutant &operator=(const SuperMutant &a);

        void takeDamage(int dmg);
};

#endif