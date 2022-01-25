/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 23:31:37 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 21:44:42 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &value) : 
	Form(value) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &value) {
	this->Form::operator=(value);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getGrade_exec())
		throw Form::ExecuteTooHighException();
	if (this->get_signatura() == false)
		throw Form::FormNotSingException();
	std::ofstream file(this->getName() + "_shrubbery");


	file <<	"______________¶¶¶¶¶¶¶¶¶¶					\n"
			"___________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶				\n" 
			"_________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶			\n"
			"________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶		\n"
			"_______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶		\n"
			"______¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶	\n"
			"_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶	\n"
			"____¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
			"___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
			"___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
			"___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶	\n"
			"___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶	\n"
			"____¶¶¶¶¶¶¶¶¶¶¶¶h¶__¶¶¶_¶¶¶___¶g¶¶¶¶¶¶		\n"
			"_____¶¶¶¶¶¶¶¶¶¶_¶¶¶¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶		\n"
			"_______¶¶¶¶¶_____¶¶¶¶¶¶¶¶¶¶¶¶¶¶			\n"
			"__________________¶¶¶¶¶¶¶¶¶				\n"
			"___________________¶¶¶¶¶¶					\n"
			"____________________¶¶¶¶¶					\n"
			"___________________¶¶¶¶¶¶					\n"
			"__________________¶¶¶¶¶¶					\n"
			"___________________¶¶¶¶¶					\n"
			"___________________¶¶¶¶¶¶					\n"
			"___________________¶¶¶¶¶¶					\n"
			"___________________¶¶¶¶¶¶					\n"
			"__________________¶¶¶¶¶¶¶¶¶				\n"
			"_________________¶¶¶¶¶¶¶¶¶¶				\n";
	file.close();		
}