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

#ifndef ITER_HPP__
#define ITER_HPP__

#include <cstddef>
#include <iomanip>
#include <iostream>
#include <string>

template <typename T>
void iter(T array[], std::size_t const size, void (*f)(T &))
{
	std::size_t i = 0;
	while(++i < size)
		f(array[i]);

	return;
}

#endif