/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:59:15 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 19:23:04 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>  // for setw
#include <iostream>
#include <cstdlib>  // for atoi

#include	"Contact.hpp"

class PhoneBook {
	private: 
		int index;
		int count;
		Contact contacts[8];
	public:
		void display_contacts_list(); 
		void	add_contact();
		bool	search_contact();
		PhoneBook();
};
bool safe_getline(std::string &input) ;
#endif
