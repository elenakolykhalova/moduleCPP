/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:26:35 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 22:05:03 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main() {
	try
	{
		Intern someRandomIntern;
		Form* proverka = someRandomIntern.makeForm("TRAMP", "presidential_pardon");

		Bureaucrat Katy("Katy", 25);
		Bureaucrat May("May", 4);

		Katy.signForm(*proverka);
		// Katy.executeForm(*proverka);
		May.executeForm(*proverka);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

// "shrubbery_request", "robotomy_request", "presidential_pardon"