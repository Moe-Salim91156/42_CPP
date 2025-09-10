/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:25:39 by msalim            #+#    #+#             */
/*   Updated: 2025/09/10 16:37:22 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animals.hpp"
class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound() const ;
};
#endif

