/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:19:18 by msalim            #+#    #+#             */
/*   Updated: 2025/08/03 02:59:45 by moe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"PhoneBook.hpp"
#include <cctype>

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
}

bool white_space_only(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		char c = str[i];
		if (!std::isspace(c))
			return (false);
	}
	return true;
}

bool safe_getline(std::string &input) 
{
    if (!std::getline(std::cin, input)) {
        std::cout << "\nEOF detected. Exiting program.\n";
        return false; 
    }
    if (input.empty() || white_space_only(input)) 
    {
        std::cout << "Field cannot be empty. Please try again.\n";
        return safe_getline(input);
    }
    return true;
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
    std::cout << "     index|First Name| Last Name|  Nickname" << std::endl;
    for (int i = 0; i < 8; ++i) 
    {
       		 std::cout << std::setw(10) << i << "|"
                  << format_field(contacts[i].getFirstName()) << "|"
                  << format_field(contacts[i].getLastName()) << "|"
                  << format_field(contacts[i].getNickName()) << std::endl;
    }
}

bool is_number(const std::string& s) {
    if (s.empty())
        return (false);

    size_t start = 0;
    if (s[0] == '-' || s[0] == '+')
        start = 1;

    if (start == s.length())
        return (false);

    for (size_t i = start; i < s.length(); ++i)
        if (!std::isdigit(s[i]))
            return (false);

    return true;
}

bool	PhoneBook::search_contact()
{
	int con_index;
	std::string line;

	display_contacts_list();
	std::cout << "Enter the Contact Index : ";
	if (!safe_getline(line))
		return false;
	if (!is_number(line))
		return (false);
	con_index = atoi(line.c_str());
	if (con_index >= 8 || con_index < 0)
	{
		std::cout << "invalid range\n";
		return false;
	}
	contacts[con_index].display_contact();
	return (true);
}
