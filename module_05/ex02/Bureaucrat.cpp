/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:18:18 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 21:58:08 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	_name = "Unknown";
	_grate = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) {
	_name = name;
	if (grade < 1) {
		throw GradeTooHighException();
	}
	if (grade > 150) {
		throw GradeTooLowException();
	}
	_grate = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &value) {
	*this = value;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &value) {
	_grate = value._grate;
	_name = value._name;
	return *this;
}

std::string	const &Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grate;
}

void Bureaucrat::GradeTooHighEx() {
	if (_grate < 2)
		throw Bureaucrat::GradeTooHighException();
	_grate--;
}

void Bureaucrat::GradeTooLowEx() {
	if (_grate > 149)
		throw Bureaucrat::GradeTooLowException();
	_grate++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat exception. Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat exception. Grade is too low");
}

void		Bureaucrat::signForm(Form &form) const{
	if (form.get_signatura()) {
		std::cout << this->getName() << " cannot sign. " << form.getName() << " is already signed!" << std::endl;
	}
	else if (form.getGrade_exec() < this->getGrade()) {
		std::cout << this->getName() << " cannot sign the form " << form.getName() << " because he doesn't have enought grade!" << std::endl;
	}
	else {
		std::cout << this->getName() << " signs the " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}

void	Bureaucrat::executeForm(const Form &form) {
	if (form.get_signatura() == true)
		std::cout << "Bureaucrat " << this->getName() << " executre form " << form.getName() << std::endl;
	else
		//exception
	form.execute(*this);
}

// void	Bureaucrat::executeForm(const Form &form) {
// 	try
// 	{
// 		form.execute(*this);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 		return ;
// 	}
// 	std::cout << this->getName() << " executes " << form.getName() << std::endl;
// }

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}