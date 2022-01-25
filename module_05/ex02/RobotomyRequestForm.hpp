/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 23:31:29 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/31 12:47:25 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQYESTFORM_HPP
# define ROBOTOMYREQYESTFORM_HPP 

#include "Form.hpp"
// class Bureaucrat;

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &value);
	~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(const RobotomyRequestForm &value);

	void execute(const Bureaucrat &executor) const;
};

#endif