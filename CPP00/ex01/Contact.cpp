/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:08:21 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 19:40:37 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"

std::string Contact::getFirstName() const {
    return FirstName;
}

std::string Contact::getLastName() const {
    return LastName;
}

std::string Contact::getNickName() const {
    return NickName;
}

std::string Contact::getPhoneNumber() const {
    return PhoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return DarkestSecret;
}

bool safe_getline(std::string &input) 
{
    if (!std::getline(std::cin, input)) {
        std::cout << "\nEOF detected. Exiting program.\n";
        return false; 
    }
    if (input.empty()) 
    {
        std::cout << "Field cannot be empty. Please try again.\n";
        return safe_getline(input);
    }
    return true;
}

bool Contact::fill_contact() 
{
    std::cout << "First Name: ";
    if (!safe_getline(FirstName)) 
	    return false;

    std::cout << "Last Name: ";
    if (!safe_getline(LastName))
	    return false;

    std::cout << "Nickname: ";
    if (!safe_getline(NickName))
	    return false;

    std::cout << "Phone Number: ";
    if (!safe_getline(PhoneNumber)) 
	    return false;

    std::cout << "Darkest Secret: ";
    if (!safe_getline(DarkestSecret)) 
	    return false;
    return true;
}

void	Contact::display_contact()
{
	std::cout << "FirstName : " << FirstName << std::endl ;
	std::cout << "LastName : " << LastName	<< std::endl ;
	std::cout << "NickName	: " << NickName	<< std::endl ;
	std::cout << "PhoneNumber : " << PhoneNumber << std::endl ;
	std::cout << "DarkestSecret : " << DarkestSecret << std::endl ;
}
