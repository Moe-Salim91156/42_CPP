/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:19:18 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 19:41:11 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
}

void PhoneBook::add_contact() {
    Contact c;
    c.fill_contact();
    contacts[index] = c;
    index = (index + 1) % 8;
    if (count < 8)
	    count++;
}

void	PhoneBook::search_contact()
{
	int con_index;
	std::cin >> con_index;
	if (con_index >=8)
	{
		std::cout << "invalide range\n";
		return;
	}

	contacts[con_index].display_contact();

}
