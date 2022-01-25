/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:15:07 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 21:51:23 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form *form_1(const std::string &name) {
	return (new ShrubberyCreationForm(name));
}

Form *form_2(const std::string &name) {
	return (new RobotomyRequestForm(name));
}

Form *form_3(const std::string &name) {
	return (new PresidentialPardonForm(name));
}

Form	*Intern::makeForm(const std::string &name, const std::string &type)
{
	std::string types[3] = {"shrubbery_request", "robotomy_request", "presidential_pardon"};
	
	Form *(*f[3])(const std::string &) = {form_1, form_2, form_3};
	for (int i = 0; i < 3; i++) {
		if (types[i].compare(type) == 0) {
			std::cout << "Intern creates " << type << std::endl;
			return (f[i](name));
		}
	}
	throw FormNotFoundException();
}

const char	*Intern::FormNotFoundException::what() const throw() {
	return ("Cann't create a form");
}