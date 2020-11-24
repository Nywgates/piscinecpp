/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:46:18 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 07:51:17 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

class Contact
{
    public :
        Contact();
        string first_name, last_name, nick_name, login, postal_add,
        email_add, phone_n, birthday, favorite_meal, underwear_cl, secret;

    	void ADD();
};