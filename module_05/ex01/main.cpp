/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:26:35 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 21:40:43 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
	try
	{
		Form form_1("Form_1", 150, 150);
		Form form_2("Form_2",1, 50);

		Bureaucrat Kate("Kate", 150);
		Bureaucrat July("July", 1);

		std::cout << form_1;
		std::cout << form_2;

		std::cout << "----------------------" << std::endl;

		Kate.signForm(form_1);
		Kate.signForm(form_2);
		std::cout << "" << std::endl;
		July.signForm(form_2);
		July.signForm(form_1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}