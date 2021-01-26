/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:50:19 by laballea          #+#    #+#             */
/*   Updated: 2021/01/26 10:50:46 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
    
    public:
        AssaultTerminator();
        virtual ~AssaultTerminator();
        AssaultTerminator(const AssaultTerminator &t);
        AssaultTerminator &operator=(const AssaultTerminator &t);

        virtual AssaultTerminator *clone() const;

        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif

