/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:11:04 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/08 12:50:31 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class contact
{
	private:
		std::string	_fname;
		std::string	_lname;
		std::string	_nickname;
		std::string	_ph_number;
		std::string	_secret;
		
	public:
		void		set_fname(std::string _fname);
		void		set_lname(std::string _lname);
		void		set_nickname(std::string _nickname);
		void		set_ph_number(std::string _ph_number);
		void		set_secret(std::string _secret);
		std::string	get_fname();
		std::string	get_lname();
		std::string	get_nickname();
		std::string	get_ph_number();
		std::string	get_secret();
};

#endif