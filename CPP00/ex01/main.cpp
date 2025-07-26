/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:17:14 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 19:16:53 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Contact.hpp"

int	main(void)
{
	std::string input; 
	Contact con1;

	std::cout << "Enter Command (add, 2:Display)" << std::endl;
	while (input.compare("Exit"))
	{
		std::cin >> input;
	if (!input.compare("add"))
	{
		con1.fill_contact();
	}
	}
	return (0);
}
