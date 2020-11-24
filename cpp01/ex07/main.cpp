/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:55:24 by laballea          #+#    #+#             */
/*   Updated: 2020/10/08 16:39:29 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int		handle_error()
{
	std::cout << "Error arguments." << std::endl;
	return (-1);
}

int		main(int argc, char **arg)
{
	if (argc > 4 || argc < 4 || !arg[1][0] || !arg[2][0] || !arg[3][0])
		return (handle_error());
	std::ofstream new_file;
	std::ifstream infile(arg[1]);
	new_file.open(arg[1] + std::string(".replace"));
	std::string s1 = arg[2];
	std::string s2 = arg[3];
	std::string line;
	int n;
	while (std::getline(infile, line))
	{
		while ((n = line.find(s1)) != -1)
			line.replace(n, s1.length(), s2);
		new_file << line << std::endl;
	}
}