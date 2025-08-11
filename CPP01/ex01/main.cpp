/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:13:13 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 16:10:31 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(4,"Name");
	if (!horde)
		return (1);
	for (int i=0; i < 3; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
