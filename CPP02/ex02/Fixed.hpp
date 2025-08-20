/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:35:38 by msalim            #+#    #+#             */
/*   Updated: 2025/08/20 19:54:35 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed {
	
	private:
		int	_number;
		static const int	_fract_bits;

	public:
		Fixed(void);
		Fixed(const int input);
		Fixed(const float floatnum);
		Fixed(const Fixed &copy_class);
		Fixed& operator=(const Fixed &other);
		~Fixed(void);
		void	setRawBits(int const raw);
		int	getRawBits(void) const;
		float	toFloat(void)const;

		int	toInt(void)const;
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);	

		/*static members*/	
		static	Fixed	&min(Fixed &a, Fixed &b);
		static	const Fixed	&min(const Fixed &a, const Fixed &b);

		static	Fixed	&max(Fixed &a, Fixed &b);
		static	const Fixed	&max(const Fixed &a, const Fixed &b);

		// getters , maybe sette
		
};
	std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
#endif
