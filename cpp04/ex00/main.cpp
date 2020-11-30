/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:02:55 by user42            #+#    #+#             */
/*   Updated: 2020/11/30 11:13:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Saroumane.hpp"

int main(){
    Sorcerer Gandalf("Gandalf", "Le gris");
    Victim   Gimli("Gimli");
    Peon     Frodon("Frodon");
    Saroumane Saroumane("Saroumane");

    std::cout << Gandalf << Frodon;

    Gandalf.polymorph(Gimli);
    Gandalf.polymorph(Frodon);
    Gandalf.polymorph(Saroumane);
}