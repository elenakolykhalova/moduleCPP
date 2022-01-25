/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:26:35 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 22:08:55 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
// #include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main() {
	try
	{
		ShrubberyCreationForm forma1("tree");
		RobotomyRequestForm forma2("Robot");
		PresidentialPardonForm forma3("PRESIDENT");
		
		std::cout << forma1;
		std::cout << forma2;
		std::cout << forma3;

		Bureaucrat Katy("Katy", 130);
		Bureaucrat July("July", 15);
		Bureaucrat Nikolay("Nikolya", 3);
		
		Nikolay.signForm(forma3);
		Nikolay.executeForm(forma3);
		std::cout << "----------------------" << std::endl;
		std::cout << forma3;
		std::cout << "----------------------" << std::endl;
		Katy.signForm(forma1);
		July.signForm(forma2);
		std::cout << "----------------------" << std::endl;
		std::cout << forma1;
		std::cout << "----------------------" << std::endl;
		forma1.execute(Katy);
		forma2.execute(Nikolay);
		forma3.beSigned(July);
		
		forma3.execute(Nikolay);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}