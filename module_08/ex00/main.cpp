/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 09:55:19 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/06 10:34:25 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> m_vec;
	m_vec.push_back(5);
	m_vec.push_back(8);
	m_vec.push_back(10);
	m_vec.push_back(10);
	m_vec.push_back(8);
	
	std::deque<int> my_deq;
	for (size_t i = 0; i < 5; i++)
		my_deq.push_back(i);

	try
	{
		int it1 = easyfind(my_deq, 5);		
		std::cout << "Item index in array it1: " << it1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "***************************" << std::endl;

	try
	{
		int it2 = easyfind(m_vec, 8);
		std::cout << "Item index in array it2: " << it2 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}