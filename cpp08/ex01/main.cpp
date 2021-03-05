/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:31:24 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 11:23:46 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main()
{
	try {
		Span sp(5);

		sp.addNumber(1);
		sp.addNumber(999);
		sp.addNumber(9999);
		sp.addNumber(49999);
		sp.addNumber(2);

		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}

    try {
        Span sp(2000);
        std::srand(time(0) * time(0));
        for (int i = 0; i < 1999; i++) {
            sp.addNumber(rand());
        }
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Span sp(1);

		sp.addNumber(49999);
		sp.addNumber(2);

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        Span sp(1);

		sp.addNumber(49999);

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}