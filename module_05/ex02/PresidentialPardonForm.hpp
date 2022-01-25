/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 23:31:20 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 14:23:35 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>
class Bureaucrat;

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &value);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &value);

		void execute(const Bureaucrat &executor) const;
};

#endif