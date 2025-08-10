/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:22:18 by msalim            #+#    #+#             */
/*   Updated: 2025/08/10 19:41:43 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &n) : _name(n) {}

void	Zombie::announce(void)
{
	std::cout << _name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string const &name)
{
	_name = name;
}
