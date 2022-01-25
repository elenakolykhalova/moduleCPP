/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 23:31:17 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 14:27:37 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &value) :
	Form(value) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &value) {
	this->Form::operator=(value);
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGrade_exec())
		throw Form::ExecuteTooHighException();
	if (!this->get_signatura())
		throw Form::FormNotSingException();
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox\n";
}