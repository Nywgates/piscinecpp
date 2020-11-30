/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Saroumane.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:32:05 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:06:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Saroumane_HPP
# define Saroumane_HPP

#include <iostream>
#include "Victim.hpp"

class Saroumane : public Victim{
    private:
        Saroumane();
    public:
        Saroumane(std::string Name);
        ~Saroumane();
        Saroumane(const Saroumane &p);
        virtual void getPolymorphed() const;
};

#endif