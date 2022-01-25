/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:50:57 by mcarry            #+#    #+#             */
/*   Updated: 2021/08/08 12:50:11 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string contact::get_fname() { return (this->_fname); }

std::string contact::get_lname() { return (this->_lname); }

std::string contact::get_nickname() { return (this->_nickname); }

std::string contact::get_ph_number() { return (this->_ph_number); }

std::string contact::get_secret() { return (this->_secret); }

void contact::set_fname(std::string fname) { this->_fname = fname; }

void contact::set_lname(std::string lname) { this->_lname = lname; }

void contact::set_nickname(std::string nickname) { this->_nickname = nickname; }

void contact::set_ph_number(std::string ph_number) { this->_ph_number = ph_number; }

void contact::set_secret(std::string secret) { this->_secret = secret; }
