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

#include	<iostream>
#include	"Contact.hpp"

void	Contact::fill_contact()
{
	std::cout << "First Name: ";
	std::cin >> FirstName;

    	std::cout << "Last Name: ";
	std::cin >> LastName;

    	std::cout << "Nickname: ";
	std::cin >> NickName;

    	std::cout << "Phone Number: ";
	std::cin >> PhoneNumber;
	
	std::cout << "Darkest Secret: ";
	std::cin >> DarkestSecret;
}

void	Contact::display_contact()
{
	std::cout << "FirstName : " << FirstName << std::endl ;
	std::cout << "LastName : " << LastName	<< std::endl ;
	std::cout << "NickName	: " << NickName	<< std::endl ;
	std::cout << "PhoneNumber : " << PhoneNumber << std::endl ;
	std::cout << "DarkestSecret : " << DarkestSecret << std::endl ;
}
