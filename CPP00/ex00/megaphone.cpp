/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:58:25 by msalim            #+#    #+#             */
/*   Updated: 2025/07/17 15:24:43 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
int	main(int ac , char **av)
{
	if (ac == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl ;
		return (0);
	}
	for (int i = 1 ; i < ac; i++)
	{
		for(int j = 0; av[i][j]; j++)	
			std:: cout << static_cast<char>(std::toupper(av[i][j]));
	}
	std::cout << std::endl; 
	return (0);
}
