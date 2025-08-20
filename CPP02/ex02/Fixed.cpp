/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:35:11 by msalim            #+#    #+#             */
/*   Updated: 2025/08/20 19:55:17 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include	<cmath>
const int	Fixed::_fract_bits = 8;

Fixed::Fixed(void) : _number(0) {
	std::cout << "defaul Fixed class constructor called " << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Get Raw Bits called " << std::endl;
	return (_number);
}

Fixed::Fixed(const int input)  {
	_number = input << _fract_bits;
	std::cout << "default constructor int called" << std::endl;
}


Fixed::Fixed(const float float_input)
{
	_number = roundf(float_input * (1 << _fract_bits));
	std::cout << "default constructor float called" << std::endl;
}

Fixed::Fixed(const Fixed &copy_class) 
{
	*this = copy_class;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "set raw bits called" << std::endl;
	_number = raw;
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
	return ((float)this->_number / (1 << this->_fract_bits));
}

int	Fixed::toInt(void) const
{
	return(this->_number >> 8) ;
}

Fixed	Fixed::operator+(const Fixed &other) const 
{
	return (this->_number + other._number);
}

Fixed	Fixed::operator-(const Fixed &other) const 
{
	return (this->_number - other._number);
}
Fixed Fixed::operator*(const Fixed &obj) const {
	long long newVal = static_cast<long long>(this->_number) * obj.getRawBits();
	newVal >>= this->_fract_bits;
	Fixed newObj;
	newObj.setRawBits(static_cast<int>(newVal));
	return (newObj);
}

Fixed	Fixed::operator/(const Fixed &other) const 
{
	return (this->_number / other._number);
}

bool Fixed::operator<(const Fixed& other) const {
    return this->_number < other._number;
}

bool Fixed::operator>(const Fixed& other) const {
    return this->_number > other._number;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->_number <= other._number;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->_number >= other._number;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->_number == other._number;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->_number != other._number;
}

Fixed	&Fixed::operator++()
{
	this->_number++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);
	this->_number++;
	return (old);
}

Fixed	&Fixed::operator--()
{
	this->_number--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	this->_number--;
	return (old);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const	Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else 
		return (b);
}

Fixed&	Fixed::max(Fixed &a , Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const	Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else 
		return (b);
}
std::ostream &operator<<(std::ostream &o, const Fixed &p)
{
    o << "Value is: "  << p.toFloat() <<  std::endl;
    return (o);
}

