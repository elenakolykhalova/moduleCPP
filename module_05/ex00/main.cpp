/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:26:35 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 22:14:05 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat Kate("Kate", 150);
		Bureaucrat July("July", 1);
		Bureaucrat Nikolay("Nikolay", 50);
		Kate.GradeTooHighEx();
		Kate.GradeTooLowEx();
		July.GradeTooLowEx();
		Nikolay.GradeTooHighEx();
		Nikolay.GradeTooHighEx();
		std::cout << Kate;
		std::cout << Nikolay;
		std::cout << July;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}