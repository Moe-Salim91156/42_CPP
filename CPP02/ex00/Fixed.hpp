/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:00:10 by msalim            #+#    #+#             */
/*   Updated: 2025/08/18 16:40:29 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int	_rawbits;
		static const int _fracbits;
	public:
		Fixed();
		Fixed(const Fixed& copy_class);
		Fixed& operator=(const Fixed &other);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		
};

#endif
