/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:15:54 by laballea          #+#    #+#             */
/*   Updated: 2021/03/04 10:29:03 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

Serialization::Serialization(){
	std::srand(std::time(0) * std::time(0));
	_data = new Data();
}

Serialization::~Serialization(){
}

void	*Serialization::serialize(){
	uint8_t *raw = new uint8_t[8 + 4 + 8];
	int		_Rint = RandInt();

	std::cout << "	DATA	" << std::endl << "1st random string : ";
	for (int i = 0; i < 8; i++){
		raw[i] = Serialization::RandChar();
		std::cout << raw[i];
	}
	std::cout << std::endl;

	std::cout << "Random integer : " << _Rint << std::endl;
	raw[8] = uint8_t((_Rint >> 24) & 0xFF);
	raw[9] = uint8_t((_Rint >> 16) & 0xFF);
	raw[10] = uint8_t((_Rint >> 8) & 0xFF);
	raw[11] = uint8_t(_Rint & 0xFF);

	std::cout << "2nd random string : ";
	for (int i = 12; i < 20; i++){
		raw[i] = Serialization::RandChar();
		std::cout << raw[i];
	}
	std::cout << std::endl;
	return (raw);
}

Serialization::Data		*Serialization::deserialize(void *raw){
	std::stringstream ss;
	uint8_t				*result = reinterpret_cast<uint8_t*>(raw);
	for (int i = 0; i < 8; i++)
		ss << char(result[i]);
	_data->s1 = ss.str();
	ss.str(std::string());
	_data->n = result[8] << 24 | result[9] << 16 | result[10] << 8 | result[11] << 0;
	for (int i = 12; i < 20; i++)
		ss << char(result[i]);
	_data->s2 = ss.str();
	(void)raw;
	return (_data);
}

void	Serialization::show(){
	std::cout << std::endl << "	RESULT		" << std::endl;
	std::cout << "1st string : " << _data->s1 << std::endl;
	std::cout << "integer : " << _data->n << std::endl;
	std::cout << "2nd string : " << _data->s2 << std::endl;
}

int		RandRange(int a, int b){
	int result = a + (std::rand() % (b - a));
	return (result);
}

char	Serialization::RandChar(){
	switch (rand() % 3) {
		case 0:
			return (RandRange(56, 58));
		case 1:
			return (RandRange(65, 91));
		case 2 :
			return (RandRange(97, 123));
	}
	return (-1);
}

int		Serialization::RandInt(){

	return (std::rand() % 2 == 0 ? std::rand() * -1 : std::rand());
}