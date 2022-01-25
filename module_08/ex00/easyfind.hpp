/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 09:55:15 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/05 13:58:27 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// #include <algorithm>
#include <vector>
#include <deque>
// #include <list>
// #include <set>
// #include <queue>
// #include <map>
// #include <typeinfo>
#include <iostream>


template <typename T>
int	easyfind(T container, int value) {
	class ErrorContainerException: public std::exception {
		const char * what() const throw() {
			return ("Error: no occurence");
		}
	};
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter != container.end()) {
		int index = std::distance(container.begin(),iter);
		return index;
		}
	else {
		throw ErrorContainerException();
	}
};

#endif