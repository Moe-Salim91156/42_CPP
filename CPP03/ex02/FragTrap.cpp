/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:30:47 by msalim            #+#    #+#             */
/*   Updated: 2025/09/01 16:38:22 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp" 


FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->_hp = 100;
    this->_attack_dmg= 30;
    this->_energy_points = 100;
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap " << _name << " assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " is requesting a high five!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
    if (this->_energy_points > 0 && this->_hp > 0)
    {
	this->_energy_points--;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
    }
    else
	    std::cout << "FragTrap " << this->_name << " is out of health or energy_points and cannot attack." << std::endl;
}
