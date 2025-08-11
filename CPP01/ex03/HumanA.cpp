/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:04:29 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 19:23:54 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name) ,weapon(weapon) {};

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}
