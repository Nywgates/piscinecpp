/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:18:35 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:08:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
    protected:
        std::string _name;
        Victim();

    public:
        std::string get_name() const;

        ~Victim();
        Victim(std::string Name);
        Victim(const Victim &v);

        virtual void getPolymorphed() const;
};


std::ostream &operator<<(std::ostream &out, const Victim &Victim);
#endif