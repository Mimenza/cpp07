/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:50:37 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/22 23:50:37 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "incs/Array.hpp"
#include "tpl/Array.tpp"
#include <cstddef> 

int main()
{
	try {
	Array<int> a(10);

	for (std::size_t i = 0; i < a.size(); i++) {
		a[i] = i;
	}

		std::cout << a << std::endl;


	//simulate error
	a[22] = 10;
	} catch (std::out_of_range& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

    return 0;
}