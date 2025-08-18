/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:46:22 by msalim            #+#    #+#             */
/*   Updated: 2025/08/18 17:59:59 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fract_bits = 8;

Fixed::Fixed(void) : _number(0) {
	std::cout << "defaul Fixed class constructor called " << std::endl;
}

Fixed::Fixed(const int input)  {
	std::cout << "default constructor int called" << std::endl;
}

Fixed::Fixed(const float float_input)
{
	std::cout << "default constructor float called" << std::endl;
}

Fixed::Fixed(const Fixed &copy_class) 
{
	*this = copy_class;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
}

float Fixed::toFloat(void) const 
{
	return ((float)this->_fract_bits / (float)(1 << this->_fract_bits));
}

