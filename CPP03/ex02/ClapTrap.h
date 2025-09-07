/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:08:53 by msalim            #+#    #+#             */
/*   Updated: 2025/09/01 15:55:36 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>

class ClapTrap 
{
	protected:
		std::string _name;
		unsigned int	_hp;
		unsigned int	_energy_points;
		unsigned int	_attack_dmg;
	public:
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &copy_class);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		/* setters */
		void set_name(const std::string &name);
		void	set_hp(unsigned int hp);
		void	set_energy_points(unsigned int energy_points);
		void	set_attack_dmg(unsigned int attack_dmg);
		/* getters */
		/* int	get_hp(void) const; */
		/* int	get_energy_points(void) const; */
		/* int	get_attack_dmg(void) const; */
		/* std::string	get_name(void) const; */
};
#endif

