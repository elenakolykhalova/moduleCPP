/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:30:54 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/03 16:37:49 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base {
	public: virtual ~Base(void) {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif