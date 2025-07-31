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

static std::string format_field(const std::string &str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return std::string(10 - str.length(), ' ') + str;
}

void PhoneBook::display_contacts_list() 
{
    std::cout << "     index|First Name| Last Name|  Nickname| PhoneNumber \n";
    for (int i = 0; i < 8; ++i) 
    {
       		 std::cout << std::setw(10) << i << "|"
                  << format_field(contacts[i].getFirstName()) << "|"
                  << format_field(contacts[i].getLastName()) << "|"
                  << format_field(contacts[i].getNickName()) << "|"
		  << format_field(contacts[i].getPhoneNumber()) << "\n";
    }
}

bool	PhoneBook::search_contact()
{
	int con_index;
	std::string line;

	display_contacts_list();
	std::cout << "Enter the Contact Index" << std::endl;
	if (!safe_getline(line))
		return false;
	con_index = atoi(line.c_str());
	if (con_index >=8)
	{
		std::cout << "invalide range\n";
		return false;
	}
	contacts[con_index].display_contact();
	return (true);
}
