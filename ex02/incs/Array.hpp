/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:51:06 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/22 23:51:06 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <sstream>
#include <stdexcept>
template <typename T>
class Array
{
    public:
        Array(void);
        Array(unsigned int const n);
        Array(Array<T> const &src);
        virtual ~Array(void);
        Array<T> &operator=(Array<T> const &rhs);

        T &operator[](std::size_t const idx) throw(std::out_of_range);
        T const &operator[](std::size_t const idx) const throw(std::out_of_range);

        std::size_t size(void) const throw();

    private:
        std::size_t mSize;
        T *mArray;

        T &get(std::size_t const idx) const throw(std::out_of_range);
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &i);

#include "../tpl/Array.tpp"
#endif