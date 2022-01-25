/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 23:31:25 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 22:20:41 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &value) :
	Form(value) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &value) {
	this->Form::operator=(value);
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGrade_exec())
		throw Form::ExecuteTooHighException();
	if (!this->get_signatura())
		throw Form::FormNotSingException();
	std::cout << "drrr..." << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->getName() << " has been robotomized successfully\n";
	else
		std::cout << "It's a failure\n";
}