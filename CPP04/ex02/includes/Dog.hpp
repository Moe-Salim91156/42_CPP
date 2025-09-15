/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:25:39 by msalim            #+#    #+#             */
/*   Updated: 2025/09/15 17:45:27 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animals.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound() const ;
		Brain	*getBrain();
};
#endif

