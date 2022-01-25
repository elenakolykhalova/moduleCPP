/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:18:22 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 22:11:19 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		std::string 	_name;
		int 			_grate; // от 1 до 150
		
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &value);
		~Bureaucrat();

		Bureaucrat & operator=(Bureaucrat const &value);
		
		std::string		getName() const;
		int				getGrade() const;

		void GradeTooLowEx(); // оценка слишком высокая
		void GradeTooHighEx(); // оценка слишком низкая
		
		class GradeTooHighException : public std::exception {
			
			public:
				virtual const char *what() const throw ();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif