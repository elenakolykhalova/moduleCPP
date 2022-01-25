/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:36:00 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/06 10:13:37 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#define C_YELLOW "\e[33m"
#define C_RESET "\e[0m"

int main () {

	std::cout << C_YELLOW <<"------MutantStack------" << C_RESET << std::endl;
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "it: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	

	std::cout << C_YELLOW <<"------MutantStack2------" << C_RESET << std::endl;
	
	MutantStack<int> mstack2;
	mstack2.push(5);
	mstack2.push(17);
	std::cout << "mstack.top " << mstack2.top() << std::endl;
	mstack2.pop();
	std::cout << "mstack.size " << mstack2.size() << std::endl;
	mstack2.push(3);
	mstack2.push(5);
	mstack2.push(737);
	mstack2.push(0);
	MutantStack<int>::iterator it2 = mstack2.begin();
	MutantStack<int>::iterator ite2 = mstack2.end();
	--ite2;
	while (ite2 != it2 -1)
	{
		std::cout << "ite: " << *ite2 << std::endl;
		--ite2;
	}
	

	std::cout << C_YELLOW <<"------list------" << C_RESET << std::endl;

	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << "lstack.top " << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << "lstack.size " << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);
	std::list<int>::iterator itl = lstack.begin();
	std::list<int>::iterator itel = lstack.end();
	++it;
	--it;
	while (itl != itel)
	{
		std::cout << "itl: " << *itl << std::endl;
		++itl;
	}
	
	

	
	
	return 0;
}