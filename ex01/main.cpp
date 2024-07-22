/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:08:16 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/22 23:08:16 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/iter.hpp"


template <typename T>
void print(T &item)
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "  " << item;

	return;
}

int main (void)
{

    char characters[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int integers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    float floatings[] = {0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F};
    std::string strings[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    std::cout << "iter<char>: ";
    ::iter<char>(characters, 10, &::print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "iter<int>: ";
    ::iter<int>(integers, 10, &::print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "iter<float>: ";
    ::iter<float>(floatings, 10, &::print);
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "iter<std::string>: ";
    ::iter<std::string>(strings, 10, &::print);
    std::cout << std::endl;

    return (0);
}
