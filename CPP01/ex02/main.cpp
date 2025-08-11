/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:13:47 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 16:32:20 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string Brain = "HI THIS IS BRAIN";
	std::string *ptr = &Brain;
	std::string &Ref = Brain;

	std::cout << &Brain << std::endl ;
	std::cout << ptr << std::endl ;
	std::cout << &Ref << std::endl ;


	std::cout << Brain << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << Ref << std::endl;
	return (0);
}
