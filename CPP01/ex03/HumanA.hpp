/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:55:10 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 19:19:56 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include	"Weapon.hpp"
class HumanA {
	private:
		const std::string _name;
		Weapon &weapon;
	public:
		HumanA(const std::string name, Weapon &weapon);
		void	attack();

};

#endif
