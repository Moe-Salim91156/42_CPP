/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:59:15 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 19:07:57 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include	"Contact.hpp"

class PhoneBook {
	private: 
		int index;
		int count;
		Contact contacts[8];
	public:
		void	add_contact();
		void	search_contact();
};

#endif
