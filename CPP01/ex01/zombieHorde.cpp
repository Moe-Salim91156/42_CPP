/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:30:57 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 16:03:58 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, const std::string &name )
{
	if (N <= 0)
		return (NULL);

	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N ; i++)
		horde[i].setName(name);
	return (horde);
}
