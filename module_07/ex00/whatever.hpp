/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarry <mcarry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:52:31 by mcarry            #+#    #+#             */
/*   Updated: 2021/09/04 09:33:41 by mcarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b);

template<typename T>
T	min(T const &a, T const &b);

template<typename T>
T	max(T const &a, T const &b);

#endif