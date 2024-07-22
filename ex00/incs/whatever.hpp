/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:11:06 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/22 23:11:06 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP__
#define WHATEVER_HPP__

#include <iostream>

template <typename T>
void swap(T &lhs, T &rhs)
{
	T tmp(lhs);

	lhs = rhs;
	rhs = tmp;

	return;
}

template <typename T>
T const &min(T const &lhs, T const &rhs)
{
	if (lhs < rhs)
		return (lhs);

	return (rhs);
}

template <typename T>
T const &max(T const &lhs, T const &rhs)
{
	if (lhs > rhs)
		return (lhs);

	return (rhs);
}

#endif