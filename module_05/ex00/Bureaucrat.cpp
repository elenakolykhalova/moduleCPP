/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:18:18 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/30 20:35:39 by mcarry           ###   ########.fr       */
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

std::string		Bureaucrat::getName() const {
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

const char *Bureaucrat::GradeTooHighException::what() const throw () {
	return ("Bureaucrat exception. Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat exception. Grade is too low");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}