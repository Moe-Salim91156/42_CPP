/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:39:17 by msalim            #+#    #+#             */
/*   Updated: 2025/08/18 16:54:12 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _rawbits(0) {
	std::cout << "Default constructor called" << std::endl;
}; 


Fixed::Fixed(const Fixed &copy_class)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy_class;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawbits = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Get Raw Bits called " << std::endl;
	return (_rawbits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "set raw bits called" << std::endl;
	_rawbits = raw;
}
