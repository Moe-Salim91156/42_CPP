/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:02:05 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 19:38:09 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	CONTACT_HPP
# define CONTACT_HPP

#include	<iostream>

class	Contact {
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		void	fill_contact();
		void	display_contact();

};
#endif
