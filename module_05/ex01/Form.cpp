/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:36:39 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 21:05:46 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>

const char *Form::GradeTooHighException::what() const throw() {
	return ("Form exception. Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Form exception. Grade is too low");
}

Form::Form() : _name("Unknown"), _signatura(false), _grade_sign(150), _grade_exec(150) {}

Form::Form(std::string name, int grade_sign, int grade_exec) : 
	_name(name),
	_grade_sign(grade_sign),
	_grade_exec(grade_exec) {
	_signatura = false;
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
		throw Form::GradeTooLowException();	
}

Form::Form(const Form &value) : 
	_name(value._name),
	_grade_sign(value._grade_sign),
	_grade_exec(value._grade_exec) {
	_signatura = false;
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
		throw Form::GradeTooLowException();	
}

Form::~Form() {}

Form &Form::operator=(Form const &value) {
	this->_signatura = value.get_signatura();
	return (*this);
}



std::string Form::getName() const { return (this->_name); }
int 		Form::getGrade_sign() const { return (this->_grade_sign); }
int			Form::getGrade_exec() const { return (this->_grade_exec); }
bool		Form::get_signatura() const { return (this->_signatura); }

void		Form::beSigned(Bureaucrat const &Bureaucrat) {
	if (Bureaucrat.getGrade() <= this->getGrade_sign())
		_signatura = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	if (form.get_signatura())
		out << form.getName() << " form is signed. " << std::endl;
	else
		out << form.getName() << " form is not signed. " << std::endl;
	//out << "Required grade to be signed is " << form.getGrade_exec() << std::endl;
	return (out);
}
