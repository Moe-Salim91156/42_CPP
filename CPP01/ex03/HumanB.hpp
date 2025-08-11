/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:10:07 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 19:19:53 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB 
{
	private:
		const std::string _name;
		Weapon *weapon;
	public:
		HumanB(const std::string name);
		void attack();
		void	setWeapon(Weapon &W);
};
#endif
