/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:36:18 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/06 10:16:39 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void) {
		return (std::stack<T>::c.begin());
	}
	
	iterator end(void) {
		return (std::stack<T>::c.end());
	}
	
	MutantStack(): std::stack<T>() {}
	MutantStack(const MutantStack<T>& value):std::stack<T>(value) {}
	MutantStack<T> &operator=(const MutantStack<T> &value) { 
		this->c = value.c; 
		return (*this); 
	}
	~MutantStack() {}
};

#endif