/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:41:10 by msalim            #+#    #+#             */
/*   Updated: 2025/08/13 16:14:31 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG] ITS DEBUGGING" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] Russian Language is good" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] error message " << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] be careful man" << std::endl;
}

void	Harl::complain(const std::string &level)
{
	void	(Harl::*fptrs[4])() = {&Harl::debug, &Harl::info, &Harl::error,&Harl::warning};
	std::string	levels[4] = {"DEBUG", "INFO", "ERROR", "WARNING"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*fptrs[i])();
	}		
}

