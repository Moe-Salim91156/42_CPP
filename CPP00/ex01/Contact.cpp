/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:08:21 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 19:11:19 by msalim           ###   ########.fr       */
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

