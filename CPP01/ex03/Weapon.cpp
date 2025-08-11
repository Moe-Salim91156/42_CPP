/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:02:06 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 19:18:34 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : type(type) {};

void Weapon::setType(const std::string &new_type)
{
	type = new_type;
}

const std::string Weapon::getType()
{
	return (type);
}

