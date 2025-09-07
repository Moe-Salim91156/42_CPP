/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:12:28 by msalim            #+#    #+#             */
/*   Updated: 2025/09/01 16:25:37 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.hpp"

int main() {
	//base
    ScavTrap s1("Guardian");

    // Copy constructor
    ScavTrap s2(s1);  
    s2.attack("Enemy");  
    s2.guardGate();

    // Assignment operator
    ScavTrap s3("Temp");
    s3 = s1;           // s3 now becomes a copy of s1
		       // this shold call the COPY Assignment opertor
    s3.attack("Enemy");  
    s3.guardGate();

    return 0;
}

