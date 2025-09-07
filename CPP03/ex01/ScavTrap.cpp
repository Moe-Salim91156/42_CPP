/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:39:30 by msalim            #+#    #+#             */
/*   Updated: 2025/09/01 16:33:55 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &n) : ClapTrap(n)
{
    this->_hp = 100;
    this->_energy_points = 50;
    this->_attack_dmg = 20;
    std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << _name << " has been copied!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
	// dont need to copy anything else since all attributes are inherited
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_energy_points > 0 && this->_hp > 0)
    {
	std::cout << "ScavTrap " << this->_name << " attacks " << target
		  << ", causing " << this->_attack_dmg << " points of damage!"
		  << std::endl;
	this->_energy_points--;
    }
    else
    {
	std::cout << "ScavTrap " << this->_name
		  << " has no energy points or hit points left to attack!"
		  << std::endl;
    }
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode."
	      << std::endl;
}












