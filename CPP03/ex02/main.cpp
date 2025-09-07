/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:12:28 by msalim            #+#    #+#             */
/*   Updated: 2025/09/01 16:40:30 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("Fraggy");

	frag.attack("Enemy");
	frag.takeDamage(5);
	frag.beRepaired(3);
	frag.highFivesGuys();

	FragTrap copyFrag(frag);
	copyFrag.attack("Another Enemy");
	copyFrag.takeDamage(10);
	copyFrag.beRepaired(5);
	copyFrag.highFivesGuys();

	FragTrap assignedFrag("Temp");
	assignedFrag = frag;
	assignedFrag.attack("Third Enemy");
	assignedFrag.takeDamage(15);
	assignedFrag.beRepaired(7);
	assignedFrag.takeDamage(100);
	assignedFrag.attack("No One");
	assignedFrag.highFivesGuys();

	return (0);
}
