/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:22:49 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 16:08:50 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string.h>
#include	<iostream>
class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(const std::string &n);
		Zombie();
		~Zombie();
		void	announce(void);
		void setName(std::string const &name);


};

Zombie*	newZombie(const std::string &name);
void	randomChump(const std::string &name);
Zombie	*zombieHorde(int n , const std::string &name);
#endif
