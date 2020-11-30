/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:57:35 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:04:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
    public:
        std::string get_name() const;
        std::string get_title() const;

        ~Sorcerer();
        Sorcerer(std::string Name, std::string Title);
        Sorcerer(const Sorcerer &s);

        void polymorph(Victim const &Victim) const;
    private:
        Sorcerer();
        std::string _name, _title;

};

std::ostream &operator<<(std::ostream &out, const Sorcerer &Sorcerer);

#endif