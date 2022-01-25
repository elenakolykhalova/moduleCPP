/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:34:13 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/03 14:08:05 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>

Base	*generate(void) {
	int i;
	srand(time(NULL));
	i = (rand() % 3);
	if (i == 0)
		return (new A());
	else if ( i == 1) 
		return (new B());
	else
		return (new C());		
}

void	identify(Base *p){
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C";
	
}

void	identify(Base &p) {
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		
	}
}

int main() {
	Base *randome = generate();
	std:: cout << "identify_ptr:\t\t";
	identify(*randome);
	std:: cout << "identify_reference:\t";
	identify(randome);
	std::cout << std::endl;
	return (0);
}