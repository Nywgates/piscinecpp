/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:17:50 by laballea          #+#    #+#             */
/*   Updated: 2021/03/04 10:22:26 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int	main(){
	Serialization serializer;
	serializer.deserialize(serializer.serialize());
	serializer.show();
	return (0);
}