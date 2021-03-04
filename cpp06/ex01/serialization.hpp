/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:11:17 by laballea          #+#    #+#             */
/*   Updated: 2021/03/04 10:26:59 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>
#include <sstream>

class Serialization{

	struct Data{
		std::string s1;
		int n;
		std::string s2;
	};

	private:
		Data *_data;

    public:
        Serialization();
        ~Serialization();
		void	*serialize();
		Data 	*deserialize(void *raw);
		void	show();
		int		RandInt();
		char	RandChar();
};

#endif