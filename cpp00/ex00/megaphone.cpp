/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:12:43 by laballea          #+#    #+#             */
/*   Updated: 2020/09/09 14:27:57 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int     main(int argc, char *argv[])
{
    int i;
    std::string s1;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (i < argc)
        {
            s1 = s1 + argv[i];
            i++;
            if (i < argc)
                s1 += " ";
        }
        i = -1;
        while (s1[++i])
            s1[i] = toupper(s1[i]);
    }
    std::cout << s1 << std::endl;
    return (0);
}