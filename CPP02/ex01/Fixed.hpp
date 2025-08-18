/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:32:46 by msalim            #+#    #+#             */
/*   Updated: 2025/08/18 17:40:43 by msalim           ###   ########.fr       */
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
		float	toFloat(void)const;
		int	toInt(void)const;
};

#endif
