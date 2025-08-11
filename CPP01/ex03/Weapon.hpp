/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:57:34 by msalim            #+#    #+#             */
/*   Updated: 2025/08/11 19:20:55 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON
#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		const std::string getType();
		void	setType(const std::string &new_type);
		Weapon(const std::string type);
		/* ~Weapon(); */

};
#endif

