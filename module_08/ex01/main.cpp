/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:08:42 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/06 10:25:57 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#define C_YELLOW "\e[33m"
#define C_RESET "\e[0m"

int main() {
	std::cout << C_YELLOW << "------Simple test------" << C_RESET << std::endl;
	Span sp(5);
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(18);
		std::cout << "Short:\t" << sp.shortestSpan() << std::endl;
		std::cout << "Longes:\t" << sp.longestSpan() << std::endl;
	} 
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << C_YELLOW << "------Tough test------" << C_RESET << std::endl;
	Span array_long(10000);
    std::vector<int> arr_iter(10000, 10);
    arr_iter[3333] = 30;
	try
	{
    	array_long.addNumber(arr_iter.begin(), arr_iter.end());
		std::cout << "Short\t" << array_long.shortestSpan() << std::endl;
		std::cout << "Longes:\t" << array_long.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	

}