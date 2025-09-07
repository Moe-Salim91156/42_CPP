/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:08:48 by msalim            #+#    #+#             */
/*   Updated: 2025/09/01 15:53:27 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hp(10), _energy_points(10), _attack_dmg(10)
{
	std::cout << "ClapTrap " << this->_name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy_class)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy_class;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_hp = other._hp;
		this->_energy_points = other._energy_points;
		this->_attack_dmg = other._attack_dmg;
		this->_name = other._name;
	}

	return (*this);
}
ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->_name << " has been destroyed!" << std::endl;
};

void	ClapTrap::attack(const std::string &target)
{
	if (_energy_points <= 0 || _hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no hit points or energy points left to attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no hit points left to take damage!" << std::endl;
		return ;
	}
	if (amount >= _hp)
	{
		_hp = 0;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage and is now destroyed!" << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage and now has " << this->_hp << " hit points left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points <= 0 || _hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left to repair!" << std::endl;
		return ;
	}
	this->_hp += amount;
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " points and now has " << this->_hp << " hit points!" << std::endl;
}
void	ClapTrap::set_attack_dmg(unsigned int amount)
{
	this->_attack_dmg = amount;
}

void	ClapTrap::set_energy_points(unsigned int amount)
{
	this->_energy_points = amount;
}
void	ClapTrap::set_hp(unsigned int amount)
{
	this->_hp = amount;
}
void	ClapTrap::set_name(const std::string &name)
{
	this->_name = name;
}

















