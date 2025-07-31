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
		bool	fill_contact();
		void	display_contact();
	   	std::string getFirstName() const;
    		std::string getLastName() const;
    		std::string getNickName() const;
    		std::string getPhoneNumber() const;
    		std::string getDarkestSecret() const;};

bool safe_getline(std::string &input) ;
#endif
