/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:46:22 by msalim            #+#    #+#             */
/*   Updated: 2025/08/20 16:32:34 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
const int	Fixed::_fract_bits = 8;

Fixed::Fixed(void) : _number(0) {
	std::cout << "defaul Fixed class constructor called " << std::endl;
}

Fixed::Fixed(const int input)  {
	_number = input << _fract_bits;
	std::cout << "default constructor int called" << std::endl;
}

Fixed::Fixed(const float float_input)
{
	_number = float_input * (1 << _fract_bits);
	std::cout << "default constructor float called" << std::endl;
}

Fixed::Fixed(const Fixed &copy_class) 
{
	*this = copy_class;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this != &other)
		this->_number = other._number;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
}

float Fixed::toFloat(void) const 
{
	return ((float)this->_number / (float)(1 << this->_fract_bits));
}

int	Fixed::toInt(void) const
{
	return(this->_number >> 8) ;
}
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
       	return (o);
}

