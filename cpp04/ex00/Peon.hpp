/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:32:05 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:06:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim{
    private:
        Peon();
    public:
        Peon(std::string Name);
        ~Peon();
        Peon(const Peon &p);
        virtual void getPolymorphed() const;
};

#endif