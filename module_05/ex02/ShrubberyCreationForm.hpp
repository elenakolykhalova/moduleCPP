/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 23:31:41 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 12:46:35 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
// class Bureaucrat;

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);

		void execute(Bureaucrat const & executor) const;
};

#endif