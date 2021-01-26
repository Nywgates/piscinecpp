/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:02:56 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:06:28 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RadScorpion_HPP
# define RadScorpion_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
	
    public:
        RadScorpion();
        virtual ~RadScorpion();
        RadScorpion(const RadScorpion &a);
        RadScorpion &operator=(const RadScorpion &a);

        void takeDamage(int dmg);
};

#endif