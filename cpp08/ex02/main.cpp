/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:26:47 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 11:27:04 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main() {
    std::cout << "42 TEST" << std::endl;
    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while(it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "My test" << std::endl;

    MutantStack<int> s(mstack);

    for (int i = 0; i < 42; i++) {
        s.push(i);
    }

    std::cout << s.empty() << std::endl;
    std::cout << s.size() << std::endl;
    std::cout << s.top() << std::endl;

    MutantStack<int>::reverse_iterator rit = s.rbegin();
    MutantStack<int>::reverse_iterator rite = s.rend();

    while(rit != rite) {
        std::cout << *rit << std::endl;
        ++rit;
    }

    MutantStack<int>::size_type size = s.size();

    for (MutantStack<int>::size_type i = 0; i < size; i++) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    std::cout << s.empty() << std::endl;

    return 0;
}