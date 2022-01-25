/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:36:33 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/30 22:18:37 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
class Bureaucrat;
#include "Bureaucrat.hpp"
#include <iostream>

class Form {
	private:
		const std::string _name;
		bool 		_signatura;
		const int	_grade_sign;
		const int	_grade_exec;
	public:
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form(const Form &value);
		~Form();

		Form &operator=(const Form &value);
		
		std::string getName() const;
		int			getGrade_sign() const;
		int			getGrade_exec() const;
		bool		get_signatura() const;

		void		beSigned(Bureaucrat const &bureaucrat);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
	
};

std::ostream	&operator<<(std::ostream &out, const Form &value);

#endif
