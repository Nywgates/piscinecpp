/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:34:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/29 11:42:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>

int     main(int argc, char **argv) {
    if (argc != 2){
        std::cout << "Not valids arguments." << std::endl;
        return (1);
    }
    Convert conv(argv[1]);
    std::cout << conv << std::endl;
    return (0);
}