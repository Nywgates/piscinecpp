/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:01:07 by laballea          #+#    #+#             */
/*   Updated: 2020/10/06 10:05:08 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(){
	string str = "HI THIS IS BRAIN";
	string *pt_str = &str;
	string &ad_ptr = str;

	std::cout << *pt_str << std::endl;
	std::cout << ad_ptr << std::endl;
}