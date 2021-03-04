/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:49:12 by laballea          #+#    #+#             */
/*   Updated: 2021/03/04 11:20:40 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void){
	switch (std::rand() % 3) {
		case 0 :
			std::cout << "Data : A" << std::endl;
			return (new A());
		case 1 :
			std::cout << "Data : B" << std::endl;
			return (new B());
		case 2 :
			std::cout << "Data : C" << std::endl;
			return (new C());
	}
	return (NULL);
}

void	identify_from_pointer(Base *p){
	if (dynamic_cast<A*> (p) != 0x0)
		std::cout << "Pointer result : A" << std::endl;
	else if (dynamic_cast<B*> (p) != 0x0)
		std::cout << "Pointer result : B" << std::endl;
	else if (dynamic_cast<C*> (p) != 0x0)
		std::cout << "Pointer result : C" << std::endl;
}

void identify_from_reference(Base &p){
	try {
		(void)dynamic_cast<A&> (p);
		std::cout << "Reference result : A" << std::endl;
	}
	catch (std::bad_cast e){};
	try {
		(void)dynamic_cast<B&> (p);
		std::cout << "Reference result : B" << std::endl;
	}
	catch (std::bad_cast e){};
	try {
		(void)dynamic_cast<C&> (p);
		std::cout << "Reference result : C" << std::endl;
	}
	catch (std::bad_cast e){};
}

int		main(){
	std::srand(std::time(0) * std::time(0));
	Base *data = generate();
	identify_from_pointer(data);
	identify_from_reference(*data);
}
