/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:28:09 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 17:49:31 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
class Intern;
#include "Form.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const &);
		Intern &operator=(Intern const &);
		~Intern();
		Form	*makeForm(const std::string &name, const std::string &type);
		
		class FormNotFoundException : public std::exception {
			public:
				const char* what() const throw();
		};
};

#endif